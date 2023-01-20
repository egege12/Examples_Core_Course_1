#include "cars.h"
#include <QDebug>
cars::cars(QObject *parent)
    : QObject{parent}
{
    qDebug() <<"cars cosntructed";
}

cars::~cars()
{
    qDebug() <<"cars decosntructed";
}
