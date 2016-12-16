#include "readstminfo.h"
#include <QFile>
#include "uart4stm.h"

extern int Alarm_No[3][32];

ReadSTMInfo::ReadSTMInfo()
{

}

void ReadSTMInfo::searchError()//总的记录
{
    ErrorOperate();
    moveOperate();
    notDoOperate();
}

int ReadSTMInfo::ErrorOperate()//错误操作检测
{

    for(int i = 0; i < 32; i++)
    {
        if(Alarm_No[0][i])
        {
;
        }
        else
        {
            break;
        }
    }

}

int ReadSTMInfo::moveOperate()//移动记录
{
    for(int i = 0; i < 32; i++)
    {
        if(Alarm_No[1][i])
        {
;
        }
        else
        {
            break;
        }
    }
}

int ReadSTMInfo::notDoOperate()//未操作记录
{
    for(int i = 0; i < 32; i++)
    {
        if(Alarm_No[2][i])
        {
;
        }
        else
        {
            break;
        }
    }
}


void ReadSTMInfo::readFile()//读文件
{

}

void ReadSTMInfo::writeFile()//写文件
{

}
