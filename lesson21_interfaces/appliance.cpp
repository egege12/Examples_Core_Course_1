#include "appliance.h"

appliance::appliance(QObject *parent)
    : QObject{parent}
{
    qInfo()<<this<<"Constructed";
}


bool appliance::freeze()
{
    return true;
}

bool appliance::cook()
{
    return true;
}

bool appliance::grill()
{
    return true;
}
