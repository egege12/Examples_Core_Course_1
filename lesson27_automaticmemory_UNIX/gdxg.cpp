#include "gdxg.h"
#include <QDebug>
gdxg::gdxg(QObject *parent)
    : QObject{parent}
{
    count++;
    qInfo()<<"Object"<<count<< "Constructed";

}

void gdxg::test()
{

    qInfo()<<this<<Q_FUNC_INFO; // It gives function info where is executed
}

gdxg::~gdxg()
{

    qInfo()<<"Object"<<count<< "Deconstructed";
    count--;
}
