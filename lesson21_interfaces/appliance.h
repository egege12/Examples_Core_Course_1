#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <QObject>
#include "freezer.h"
#include "toaster.h"
#include "microwave.h"
#include <QDebug>

class appliance : public QObject , public toaster, public microwave , public freezer
{
    Q_OBJECT
public:
    explicit appliance(QObject *parent = nullptr);

signals:


    // freezer interface
public:
    bool freeze();

    // microwave interface
public:
    bool cook();

    // toaster interface
public:
    bool grill();
};

#endif // APPLIANCE_H
