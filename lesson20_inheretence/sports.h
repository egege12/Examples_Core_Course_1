#ifndef SPORTS_H
#define SPORTS_H

#include <QObject>
#include "cars.h"
class sports : public cars
{
    Q_OBJECT
public:
    explicit sports(QObject *parent = nullptr);
    void isHigh();


};

#endif // SPORTS_H
