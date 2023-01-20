#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>
#include "station.h"
#include "radio.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    radio boombox;
    station* channels[3];

    channels[0] = new station(&boombox,94,"Rock and Roll");
    channels[1] = new station(&boombox,95,"Hip Hop");
    channels[2] = new station(&boombox,96,"News");

    boombox.connect(&boombox,&radio::quit,&a,&QCoreApplication::quit,Qt::QueuedConnection); // radionnun quit sinyali tetiklendiğinde core applicationinin quit slotu çağrılacak ve uygulama duracak
        // buna flaw(kusur) denir. Çünkü burda bir tread var ve sondaki ifadeyi eklediğimizde o thread de kapanır
        //Eğer böyle bir uygulama yapıyorsan ve slot yanıt vermiyorsa bağlantı tipini kontrol et ve fakrlı bir yol olduğunu gör
   do
    {
        qInfo()<<"Enter on, off, test or quit";
        QTextStream qtin(stdin);
        QString line = qtin.readLine().trimmed().toUpper();

        if(line == "OFF" || line =="off"){
            qInfo()<<"Turning the radio off";
            for (int i=0 ; i< 3; i++)
            {
                station* channel = channels[i];
                boombox.disconnect(channel,&station::send,&boombox,&radio::listen);
            }
            qInfo()<<"Radio is off";
        }
        if(line == "ON" || line =="on"){
            qInfo()<<"Turning the radio on";
            for (int i=0 ; i< 3; i++)
            {
                station* channel = channels[i];
                boombox.connect(channel,&station::send,&boombox,&radio::listen);
            }
            qInfo()<<"Radio is on";
        }
        if(line == "TEST" || line =="test"){
            qInfo()<<"Testing";
            for (int i=0 ; i< 3; i++)
            {
                station* channel = channels[i];
                channel ->broadcast("Broadcast!!");
            }
            qInfo()<<"Test complete";
        }
        if(line == "QUIT" || line =="quit"){
            qInfo()<<"Quiting";
            emit boombox.quit();
            break;
        }
    }while(true);


    return a.exec();
}
