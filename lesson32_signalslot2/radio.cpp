#include "radio.h"
#include <QDebug>
radio::radio(QObject *parent)
    : QObject{parent}
{

}

void radio::listen(int channel, QString name, QString message)
{
    qInfo()<< "From channel:"<< channel << "name of "<< "gives message : " << message;
}
