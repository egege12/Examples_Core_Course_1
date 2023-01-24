#include "cat.h"
#include <QDebug>
cat::cat(QObject *parent)
    : QObject{parent}
{

}

void cat::scared()
{
    qInfo()<<"I scared and I am starting to running";
    emit run();
}
