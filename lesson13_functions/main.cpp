#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <array>
#include <cmath>

float circleArea(float r)
{
    const float pi = 3.14;
    float area = 0.0;
    area = pi * pow(r,2);
    return area;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    float r;
    qInfo()<<"Please enter r of circle :";
    std::cin>>r;
    if (r != 0.0)
    qInfo()<<"Circle area: "<<circleArea(r);
    else
    qDebug()<<"Your entered zero";

    return a.exec();
}
