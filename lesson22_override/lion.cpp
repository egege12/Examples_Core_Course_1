#include "lion.h"

lion::lion(QObject *parent)
    : felline{parent}
{
    qInfo()<<this<<"Constructed";
}

void lion::speak()
{
    qInfo()<<"Roar !!";

}
