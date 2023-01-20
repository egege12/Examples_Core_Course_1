#include "laptop.h"

laptop::laptop(QObject *parent, QString name)
    : QObject{parent}
{
    this->name = name;
    qInfo()<<this<<"Constructed"<<this->name;
}

laptop::~laptop()
{
    qInfo()<<this<<"Deconstructed"<<this->name;
}

double laptop::asKilo()
{
    return this->weight * 0.453592;
}

void laptop::test()
{
    qDebug()<<this->name<<" has "<< this->asKilo()<<"kg";
}
