#include "test.h"
#include <QDebug>
test::test(QObject *parent)
    : QObject{parent}
{
    qInfo()<<"Constructed test";
}

test::~test()
{
    qInfo()<<"Deconstructed test";
}
