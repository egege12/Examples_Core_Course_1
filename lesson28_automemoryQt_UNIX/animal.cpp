#include "animal.h"
#include <QDebug>
animal::animal(QObject *parent)
    : QObject{parent}
{
    qInfo()<<"Constructed animal";
}

animal::~animal()
{
    qInfo()<<"Deconstructed animal";
}
