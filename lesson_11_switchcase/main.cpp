#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age =0;
    qInfo()<<"Please enter an age";
    cin>>age;

    switch (age)
    {
    case 1 :
        qInfo()<<"entered 1";
    break;
    case 2 :
        qInfo()<<"entered 2";
    break;
    default:
        qInfo()<<"Neither 1 nor 2";
    }
    return a.exec();
}
