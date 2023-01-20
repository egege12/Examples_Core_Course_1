#include "car.h"

car::car(QObject *parent)
    : QObject{parent}
{

}

void car::drive()
{
    qInfo()<<"Driving";
}

void car::stop()
{
    qInfo()<<"Stopped";
}
