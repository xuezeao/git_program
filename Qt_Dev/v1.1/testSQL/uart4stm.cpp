

/*
 * uart4Palm.c
 *
 *  Created on: 2015-8-20
 *      Author: siemon
 */
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


#include <sys/time.h>
#include <dirent.h>
#include <string.h>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

#include "popuppage.h"
#include "uart4stm.h"
#include <QDebug>

int DateTime[7];
int Mode_Clock[2];
int Mode_Buzzer;
int Temperature;
int Humidity;


/*
 * Check Sum
 */
char uartCheckSum(char* data, int num)
{
    char sum = 0;
    int i = 0;
    for(i = 0; i < num; i++)
        sum += *(data + i);
    return sum;
}

/**
 * Send commands.
 */

void PackageSend(QSerialPort* uartfd,int DID, struct Package1 data1, struct Package2 data2)
{

    data1.Header[0] = 0x1C;
    data1.Header[1] = 0x47;
    data1.Header[2] = 0x45;
    data1.Header[3] = 0x42;

    data1.DevID[0] = DID;

    data1.CheckSum = uartCheckSum(&data1.DevID[0],4);
    int sendLen =  data1.ExtraDataLen[0];
    if(sendLen >40 )
        sendLen = 40;


    data2.ExtraData[sendLen-1] = uartCheckSum(&data2.ExtraData[0], sendLen-1);

    QByteArray dataMsg;
    dataMsg.resize(sizeof(data1)+sizeof(data2));
    memcpy(dataMsg.data(),&data1,9);
    memcpy(dataMsg.data()+9,&data2,sendLen);
    uartfd->write(dataMsg,9+sendLen);
}


int SetSysTime(QSerialPort* uartfd,int DID,char *datetime)//0x01 设置系统时间
{
    //if(machineryFlag != 0)
    //	return 0;
    struct tm tmDisp;
    sscanf(datetime,"%d-%d-%d %d:%d:%d %d",&tmDisp.tm_year, &tmDisp.tm_mon, &tmDisp.tm_mday,
            &tmDisp.tm_hour, &tmDisp.tm_min, &tmDisp.tm_sec, &tmDisp.tm_wday);
    struct Package1 P1;
    P1.CmdID = CID_SET_TIME;
    P1.ErrorCode = 0;
    P1.ExtraDataLen[0] = 8;

    struct Package2 P2;
    //memcpy(P2.ExtraData,disp,10);
    P2.ExtraData[0] = tmDisp.tm_year-2000;
    P2.ExtraData[1] = tmDisp.tm_mon;
    P2.ExtraData[2] = tmDisp.tm_mday;
    P2.ExtraData[3] = tmDisp.tm_hour;
    P2.ExtraData[4] = tmDisp.tm_min;
    P2.ExtraData[5] = tmDisp.tm_sec;
    P2.ExtraData[6] = tmDisp.tm_wday;

    qDebug("%d-%d-%d %d:%d:%d %d", tmDisp.tm_year, tmDisp.tm_mon, tmDisp.tm_mday,
                tmDisp.tm_hour, tmDisp.tm_min, tmDisp.tm_sec, tmDisp.tm_wday);

    PackageSend(uartfd,DID,P1, P2);
    return (0);
}


int SetBuzzer(QSerialPort* uartfd,int DID,int Mode_Buzzer)//0x02 设置蜂鸣器 0-close;1-open
{
    struct Package1 P1;
    P1.CmdID = CID_SET_BUZZER;
    P1.ErrorCode = 0;
    P1.ExtraDataLen[0] = 0x02;
    struct Package2 P2;
    P2.ExtraData[0] = Mode_Buzzer;
    PackageSend(uartfd,DID,P1, P2);
    return (0);
}


int SetDigital(QSerialPort* uartfd,int DID,int number)//0x03 设置数码管状态
{
    struct Package1 P1;
    P1.CmdID = CID_SET_DIGITAL;
    P1.ErrorCode = 0;
    P1.ExtraDataLen[0] = 5;

    struct Package2 P2;
    P2.ExtraData[0] = number/1000;
    P2.ExtraData[1] = number%1000/100;
    P2.ExtraData[2] = number%100/10;
    P2.ExtraData[3] = number%10;

    PackageSend(uartfd,DID,P1, P2);
    return (0);
}


int SetFan(QSerialPort* uartfd,int DID,int Mode_Fan)//0x04 设置风扇状态 0-close;1-open
{
    struct Package1 P1;
    P1.CmdID = CID_SET_FAN;
    P1.ErrorCode = 0;
    P1.ExtraDataLen[0] = 0x02;
    struct Package2 P2;
    P2.ExtraData[0] = Mode_Fan;
    PackageSend(uartfd,DID,P1, P2);
    return (0);
}

int SetDoorClock(QSerialPort* uartfd,int DID,int Mode_Lock1, int Mode_Lock2)//0x05 设置门锁状态 0-close;1-open
{
    struct Package1 P1;
    P1.CmdID =CID_SET_DOOR_LOCK;
    P1.ErrorCode = 0;
    P1.ExtraDataLen[0] = 0x03;

    struct Package2 P2;
    P2.ExtraData[0] = Mode_Lock1;
    P2.ExtraData[1] = Mode_Lock2;

    PackageSend(uartfd,DID,P1, P2);

    return (0);
}


int RequestRTC(QSerialPort* uartfd,int DID)//0x31 请求RTC时间
{
    struct Package1 P1;
    P1.CmdID = CID_REQUEST_RTC_TIME;
    P1.ErrorCode = 0;
    P1.ExtraDataLen[0] = 0x00;

    struct Package2 P2;

    PackageSend(uartfd,DID,P1, P2);
    return (0);
}

int RequestBuzzer(QSerialPort* uartfd,int DID) //0x32 请求蜂鸣器状态
{
    struct Package1 P1;
    P1.CmdID = CID_REQUEST_BUZZER;
    P1.ErrorCode = 0;
    P1.ExtraDataLen[0] = 0x00;

    struct Package2 P2;

    PackageSend(uartfd,DID,P1, P2);
    return (0);
}

int RequestTemperatureHumidity(QSerialPort* uartfd,int DID) //0x33 请求温湿度
{
    struct Package1 P1;
    P1.CmdID = CID_REQUEST_TEMPERATURE_HUMIDITY;
    P1.ErrorCode = 0;
    P1.ExtraDataLen[0] = 0x00;

    struct Package2 P2;

    PackageSend(uartfd,DID,P1, P2);
    return (0);
}

int RequestDoorClock(QSerialPort* uartfd,int DID)//0x35 请求门锁状态
{
    struct Package1 P1;
    P1.CmdID = CID_REQUEST_DOOR_CLOCK;
    P1.ErrorCode = 0;
    P1.ExtraDataLen[0] = 0x00;

    struct Package2 P2;

    PackageSend(uartfd,DID,P1, P2);
    return (0);
}


int SetDrawerClock(QSerialPort* uartfd,int DID,int Mode)//0x11 设置抽屉锁状态
{
    struct Package1 P1;
    P1.CmdID =CID_SET_DRAWER_LOCK;
    P1.ErrorCode = 0;
    P1.ExtraDataLen[0] = 0x02;

    struct Package2 P2;
    P2.ExtraData[0] = Mode;

    PackageSend(uartfd,DID,P1, P2);

    return (0);
}

int SetLED(QSerialPort* uartfd,int DID,char *DataLed)//0x12 设置LED状态
{
    struct Package1 P1;
    P1.CmdID =CID_SET_LED;
    P1.ErrorCode = 0;
    struct Package2 P2;
    for(int i=0;i<6;i++)
    {
        P2.ExtraData[i] = DataLed[i];
    }


    PackageSend(uartfd,DID,P1, P2);
    sleep(1);

    return (0);
}

int RequestDrawerClock(QSerialPort* uartfd,int DID)//0x41 请求抽屉锁状态
{
    struct Package1 P1;
    P1.CmdID = CID_REQUEST_DRAWER_CLOCK;
    P1.ErrorCode = 0;
    P1.ExtraDataLen[0] = 0x00;

    struct Package2 P2;

    PackageSend(uartfd,DID,P1, P2);
    return (0);
}

int RequestLED(QSerialPort* uartfd,int DID)//0x42 请求请求光电状态状态
{
    struct Package1 P1;
    P1.CmdID = CID_REQUEST_DRAWER_CLOCK;
    P1.ErrorCode = 0;
    P1.ExtraDataLen[0] = 0x00;

    struct Package2 P2;

    PackageSend(uartfd,DID,P1, P2);
    return (0);
}


