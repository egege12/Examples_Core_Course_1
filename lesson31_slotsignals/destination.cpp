#include "destination.h"
#include <QDebug>
#include <iostream>
Destination::Destination(QObject *parent)
    : QObject{parent}
{

}

void Destination::mySlot(QString message)
{
    qInfo()<<message;
}
