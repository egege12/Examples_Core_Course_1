#include "suv.h"


suv::suv(QObject *parent)
    : cars{parent}
{
    qDebug() <<"SUV cosntructed";
}

void suv::isHigh()
{
    qInfo()<<"It is high";
}


