#ifndef SUV_H
#define SUV_H

#include <QObject>
#include "cars.h"
#include <QDebug>

class suv : public cars
{
    Q_OBJECT
public:
    explicit suv(QObject *parent = nullptr);
    void isHigh();

signals:

};

#endif // SUV_H
