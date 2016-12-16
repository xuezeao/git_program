#ifndef THREADREAD_H
#define THREADREAD_H

#include <QThread>
#include <iostream>

class ThreadRead : public QThread
{
     Q_OBJECT
public:

protected:
    void run();

private:
    QString messageStr;
    volatile bool stopped;
};
#endif  //THREAD_H


