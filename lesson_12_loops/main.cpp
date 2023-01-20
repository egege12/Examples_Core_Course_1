#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//While
    int start = 20 ;
    int max = 100 ;
    int i =start;
    while (i<max)
    {
        i++;
        qInfo()<<"Counter on "<<i;

        if (i == max)
            qInfo()<<"Finished";
    }

//Do while
    i =start;
    do
    {
        i++;
        qInfo()<<"Counter on "<<i;

        if (i == max)
            qInfo()<<"Finished";
    }while(i<max);

//for
    for (int j=0; j<max; j++)
    {
         qInfo()<<"Counter on "<<j;
    }
    QString speech = "times";
    for (int k=0; k<max; k++)
    {
         qInfo()<<"I will say "<< max-k << speech;
    }
    return a.exec();
}
