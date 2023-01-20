#ifndef SUVCAR_H
#define SUVCAR_H

#include <QObject>
#include <QDebug>
#include "car.h"
class suvcar : public car
{
    Q_OBJECT
public:
    explicit suvcar();
    void driveHigh();
signals:

};

#endif // SUVCAR_H
