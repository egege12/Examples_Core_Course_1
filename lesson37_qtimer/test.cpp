#include "test.h"
#include <QDebug>
test::test(QObject *parent)
    : QObject{parent}
{   this->count=0;
    connect(&m_timer,&QTimer::timeout,this,&test::timeout);
    m_timer.setInterval(1000);
    m_timer.start(1000);

}

void test::timeout()
{   count++;
    qInfo()<<"Timer test";
    if(this->count >= 5){
        m_timer.stop();
        emit notify();
    }

}
