#ifndef READSTMINFO_H
#define READSTMINFO_H


class ReadSTMInfo
{
public:
    ReadSTMInfo();
    void searchError();
    void writeFile();
    void readFile();

private:

    int moveOperate();//移动记录
    int ErrorOperate();//错误操作检测
    int notDoOperate();//未操作记录
};

#endif // READSTMINFO_H
