#include <QCoreApplication>
#include <QDebug>

// qt int tipleri
// evrensel tipleri kullanabilmeye yarar.


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qint8 value8 = 0;
    qint16 value16 = 0;
    qint32 value32 = 0;
    qint64 value64 = 0;
    qintptr valueptr = 0;


    qInfo()<<"Size of value8"<< sizeof(value8);
    qInfo()<<"Size of value8"<< sizeof(value16);
    qInfo()<<"Size of value8"<< sizeof(value32);
    qInfo()<<"Size of value8"<< sizeof(value64);


    return a.exec();
}
