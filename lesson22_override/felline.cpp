#include "felline.h"

felline::felline(QObject *parent)
    : QObject{parent}
{
    qInfo()<<this<<"Constructed";
}

void felline::speak()
{
    qInfo()<<"Meow";
}
