#include <QCoreApplication>
#include <QDebug>
#include <QDate>
#include <QTime>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //QDate kullanımı
    QDate today = QDate::currentDate();

    qInfo()<<today;
    qInfo()<<today.addDays(2);
    qInfo()<<today.addYears(2);
    qInfo()<<"QDate";
    qInfo()<<"Formatlanmiş versiyonlar";

    qInfo()<<"ISODate"<<today.toString(Qt::DateFormat::ISODate);
    qInfo()<<"RFC2822Date"<<today.toString(Qt::DateFormat::RFC2822Date);
    qInfo()<<"TextDate"<<today.toString(Qt::DateFormat::TextDate);

    //QTime kullanımı

    QTime now = QTime::currentTime();
    qInfo()<<"QTime";
    qInfo()<<now;
    qInfo()<<now.addSecs(200);
    qInfo()<<now.hour();

    qInfo()<<"ISODate"<<now.toString(Qt::DateFormat::ISODate);
    qInfo()<<"RFC2822Date"<<now.toString(Qt::DateFormat::RFC2822Date);
    qInfo()<<"TextDate"<<now.toString(Qt::DateFormat::TextDate);


    //QDateTime kullanımı


    QDateTime current = QDateTime::currentDateTime();

    qInfo()<<"QDateTime";
    qInfo()<<current;
    qInfo()<<current.addDays(23);

    qInfo()<<"ISODate"<<current.toString(Qt::DateFormat::ISODate);
    qInfo()<<"RFC2822Date"<<current.toString(Qt::DateFormat::RFC2822Date);
    qInfo()<<"TextDate"<<current.toString(Qt::DateFormat::TextDate);


    // Biraz değiştirelim

    QDateTime expire = current.addDays(45);
    qInfo()<<"Expire on" << expire;

    if(current> expire){
        qInfo()<<"Your program license is expired";
     }else{
        qInfo()<<"Your program license is not expired";
    }

    return a.exec();
}
