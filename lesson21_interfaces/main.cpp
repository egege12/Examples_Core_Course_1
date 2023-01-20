#include <QCoreApplication>
#include <QDebug>
#include "appliance.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    appliance myDev;

    qInfo()<< "Cook : "<< myDev.cook();
    qInfo()<< "Grill : "<< myDev.grill();
    qInfo()<< "Freeze : "<< myDev.freeze();

    return a.exec();
}
