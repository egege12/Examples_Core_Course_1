#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age ;

    qInfo() << "Deger: " << age ;

    age = 2;

    qInfo() << "Deger : "<< age;

    age++;

    qInfo() << "Deger : "<< age;

    int older = age * 5;

    qInfo() << "Older : " << older;

    return a.exec();
}
