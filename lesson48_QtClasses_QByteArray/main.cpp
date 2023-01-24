#include <QCoreApplication>
#include <QByteArray>
//QByteArray - Veri ile ilişkili her yerde kullanılır.


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString greeting = "Hello world";

    QByteArray buffer(greeting.toUtf8());

     // append - sonuna ekleme yapar
    buffer.append("!");
    qInfo() << buffer;

    //rightjustified - sağa 20 birim sonrasında dayar ve boşluğu verilen ile doldurur. - objeyi değiştirmez
    qInfo()<< buffer.rightJustified(20,'.');

    qInfo()<< buffer.at(buffer.length()-1);

    QString modified(buffer);
    qInfo()<<modified;

    //Basic encoding and decoding

    qInfo() << buffer.toBase64();
    qInfo() << buffer.toHex();

     QByteArray Data;
     Data.append(5);

     bool bit0,bit1,bit2,bit3;
     bit0=0b000000001 & Data[0];
     bit1=0b000000010 & Data[0];
     bit2=0b000000100 & Data[0];
     bit3=0b000001000 & Data[0];
     qInfo()<< "Bit0"<< bit0;
     qInfo()<< "Bit1"<< bit1;
     qInfo()<< "Bit2"<< bit2;
     qInfo()<< "Bit3"<< bit3;

    return a.exec();
}
