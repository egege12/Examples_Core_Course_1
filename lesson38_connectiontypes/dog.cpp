#include "dog.h"
#include <QDebug>
dog::dog(QObject *parent)
    : QObject{parent}
{

}

void dog::treat()
{
    qInfo()<<"BARK!!";
}
