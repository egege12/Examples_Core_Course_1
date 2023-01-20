#include "sports.h"

sports::sports(QObject *parent)
    : cars{parent}
{
    qDebug() <<"sports cosntructed";
}

void sports::isHigh()
{
    qInfo()<<"It not is high";
}

