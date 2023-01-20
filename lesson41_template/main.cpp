#include <QCoreApplication>
#include <QDebug>
#include "add.h"

template <typename T>
void print(T Val){
    qInfo()<<Val;+
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QObject obj1;
    print<int>(2);
    print<double>(2.2883);
    print<QString>(QString("Hello"));
    print<QObject*>(&obj1);


    add<int> total;
    //add<QObject*> totalQobject;


    qInfo()<<total.Sum(2,3);
    //qInfo()<<totalQobject.Sum(&obj1,&sobj2); // yapamazsın çünkü Qobject operator overload yok
    return a.exec();
}
