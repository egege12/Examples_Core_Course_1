#include "owner.h"
#include <QDebug>
owner::owner(QObject *parent)
    : QObject{parent}
{

}

void owner::giveSnacks()
{
    qInfo()<<"Here is your mama!!";
    emit treat();
}
