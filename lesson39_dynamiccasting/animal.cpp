#include "animal.h"
#include <QDebug>
animal::animal(QObject *parent)
    : QObject{parent}
{

}

void animal::roar()
{
    qInfo()<<"roar!!";
}
