#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //If-else statement
    /*
    int age =0;
    qInfo()<<"Please enter an age";
    cin>>age;

    if ((age < 1 ) || (age > 120))
    {
     qFatal("Not a valid age");
    }
    else
        qInfo()<<"You are "<<age<<"years old";

    */

    //Ternary operator

    int age =0;
    qInfo()<<"Please enter an age";
    cin>>age;

    age> 0 && age <100 ? qInfo("Valid age") : qInfo("Invalid age");

    return a.exec();
}
