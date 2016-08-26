#ifndef UART4STM_H
#define UART4STM_H
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

/*
 * uart4Palm.h
 *
 *  Created on: 2015-8-18
 *      Author: siemon
 */


#define CONTROL_BOARD_HEAD_SEND	0x1C474542
#define CONTROL_BOARD_HEAD_RECV	0x1B464441
#define CONTROL_BOARD_HEAD_RESP 0xEB90EB90

#define STM8_0_DEVID		0xFF
#define STM8_1_DEVID		0x01

#define BUFFER_SIZE		512


#define CID_SET_TIME                        0x01
#define CID_SET_BUZZER                      0x02
#define CID_SET_DIGITAL                     0x03
#define CID_SET_FAN                         0x04
#define CID_SET_DOOR_LOCK                   0x05

#define CID_REQUEST_RTC_TIME                0x31
#define CID_REQUEST_BUZZER                  0x32
#define CID_REQUEST_TEMPERATURE_HUMIDITY    0x33
#define CID_REQUEST_DOOR_CLOCK              0x35

#define CID_SET_DRAWER_LOCK                 0x11
#define CID_SET_LED                         0x12

#define CID_REQUEST_DRAWER_CLOCK            0x41
#define CID_REQUEST_LED                     0x42


enum
{
    STATE_SET_TIME,                         //0x01 设置系统时间
    STATE_SET_BUZZER,                       //0x02 设置蜂鸣器
    STATE_SET_DIGITAL,                      //0x03 设置数码管状态
    STATE_SET_FAN,                          //0x04 设置风扇状态
    STATE_SET_DOOR_LOCK,                    //0x05 设置门锁状态

    STATE_REQUEST_RTC_TIME,                 //0x31 请求RTC时间
    STATE_REQUEST_BUZZER,                   //0x32 请求蜂鸣器状态
    STATE_REQUEST_TEMPERATURE_HUMIDITY,     //0x33 请求温湿度
    STATE_REQUEST_DOOR_CLOCK,
    STATE_DOOR1_CLOCK_OPEN,
    STATE_DOOR1_CLOCK_CLOSE,
    STATE_DOOR2_CLOCK_OPEN,
    STATE_DOOR2_CLOCK_CLOSE,                      //0x35 请求门锁状态

    STATE_SET_DRAWER_LOCK,                  //0x11 设置抽屉锁状态
    STATE_SET_LED,                          //0x12 设置LED状态

    STATE_REQUEST_DRAWER_CLOCK,
    STATE_DRAWER_CLOCK_OPEN,
    STATE_DRAWER_CLOCK_CLOSE,               //0x41 请求抽屉锁状态
    STATE_REQUEST_LED,                      //0x42 请求请求光电状态状态

    STATE_NONE,
    STATE_ERROR
};

struct Package1
{
    char Header[4];
    char DevID[1];
    char CmdID;
    char ExtraDataLen[1];
    char ErrorCode;
    char CheckSum;
};

struct Package2
{
    char ExtraData[256];
    char ExCheckSum;
};

extern int STATE_RTN ;


int SetSysTime(QSerialPort* uartfd,int DID,char *datetime);                     //0x01 设置系统时间
int SetBuzzer(QSerialPort* uartfd,int DID,int Mode_Buzzer);                     //0x02 设置蜂鸣器
int SetDigital(QSerialPort* uartfd,int DID,int number);                         //0x03 设置数码管状态
int SetFan(QSerialPort* uartfd,int DID,int Mode_Fan);                           //0x04 设置风扇状态
int SetDoorClock(QSerialPort* uartfd,int DID,int Mode_Lock1, int Mode_Lock2);   //0x05 设置门锁状态

int RequestRTC(QSerialPort* uartfd,int DID);                                   //0x31 请求RTC时间
int RequestBuzzer(QSerialPort* uartfd,int DID);                                //0x32 请求蜂鸣器状态
int RequestTemperatureHumidity(QSerialPort* uartfd,int DID);                   //0x33 请求温湿度
int RequestDoorClock(QSerialPort* uartfd,int DID);                             //0x35 请求门锁状态

int SetDrawerClock(QSerialPort* uartfd,int DID, int Mode);                       //0x11 设置抽屉锁状态
int SetLED(QSerialPort* uartfd, int DID,char *DataLed);                          //0x12 设置LED状态

int RequestDrawerClock(QSerialPort* uartfd,int DID);                           //0x41 请求抽屉锁状态
int RequestLED(QSerialPort* uartfd,int DID);                                   //0x42 请求请求光电状态状态


void PackageSend(QSerialPort* uartfd,int DID, struct palmPackage1 data1, struct palmPackage2 data2);



#endif // UART4STM_H
