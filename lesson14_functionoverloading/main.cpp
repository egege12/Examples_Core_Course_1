#include <QCoreApplication>
#include <QDebug>

void overloadfunc ()
{
    qInfo()<<"This is function 1";
}
void overloadfunc (int x)
{
    qInfo()<<"This is function " << x;
}
void overloadfunc (QString x)
{
    qInfo()<<"This is function " << x;
}
void overloadfunc (bool x)
{
    qInfo()<<"This is function " << x;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int x = 2 ;
    QString y = "4";
    overloadfunc();
    overloadfunc(x);
    overloadfunc("3");   // -->>>  It select the bool input ????
    overloadfunc(y);
   // overloadfunc(23.5);  ->>>> Cant find which one is
    return a.exec();
}
