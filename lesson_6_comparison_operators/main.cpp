/*
 *
 *
 *  ==	Equal to	x == y
 *  !=	Not equal	x != y
 *  >	Greater than	x > y
 *  <	Less than	x < y
 *  >=	Greater than or equal to	x >= y
 *  <=	Less than or equal to	x <= y
 *
 *
 *
 */
#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x =15 ,y = 15;

    qInfo() <<"Is them equal :" << (x==y) ;

    int z,k = 15;

    qInfo() <<"Is them equal :" << (z==k) ;

    return a.exec();
}
