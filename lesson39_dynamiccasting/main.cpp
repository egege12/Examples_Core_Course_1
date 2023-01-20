#include <QCoreApplication>
#include "suvcar.h"
#include "animal.h"
#include "car.h"
#include <QDebug>

void testDrive(car * obj){
    obj->drive();
    obj->stop();
    qInfo()<<obj;
}
void driveHigh(suvcar *obj){
    obj->driveHigh();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    car* carPtr = new car(&a);
    suvcar* suvPtr = new suvcar();
    animal* cat = new animal(&a);
    testDrive(carPtr);
    driveHigh(suvPtr);
    car* dynCast = dynamic_cast<car*>(suvPtr); // dynamic cast  , changes pointer  inherited to base
    if(dynCast) testDrive(dynCast);
    car* sttCast = static_cast<car*>(suvPtr); // static cast , only changes pointer type base to inherited
    if(sttCast) testDrive(sttCast);
    car* intCast = reinterpret_cast<car*>(cat); // reinterpret cast
    testDrive(intCast);
    car* qobjCast = qobject_cast<car*>(suvPtr); // qobject cast doesnt cast different drived classes
    if(qobjCast) testDrive(qobjCast);
    delete suvPtr;


            return a.exec();
}
