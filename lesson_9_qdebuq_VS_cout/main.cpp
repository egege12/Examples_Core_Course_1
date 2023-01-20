#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age =0;

    qInfo()<<"Enter your age:";
    cin>>age;

    qInfo()<<"You are "<< age <<"years old";

    qInfo()<<"Information";
    qDebug()<<"Debug";  // It continue to work but It is debug message, It is easy to throw  debug message
    qWarning()<<"Warning"; // It means hey It is a warning message
    qCritical()<<"Critical"; // It continue to work It is critcal message, It is easy to throw error without crash
    qFatal("Fatal Crash"); // we use to create crash

    return a.exec();
}
