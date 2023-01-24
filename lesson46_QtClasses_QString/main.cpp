#include <QCoreApplication>
#include <QDebug>

void test(QString name){ // QString Qobject olmadığı için kopyalabilirsin.


}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Egemen Turker";

    qInfo()<< name;
    //mid
    qInfo()<< name.mid(1,3); // 1 ve 3 konum dahil arasını alır.
    //insert, objeyi değiştirir.
    qInfo()<< name.insert(0,"Mr. ");
    //split , qlist olarak döner
    qInfo()<< name.split(" ");

    qInfo()<< name;

    //Index of  - aranan öğ
    int index = name.indexOf(".");
    qInfo()<<"The index of \".\" is : "<<index;

    //Remove ve trimmed
                //trimmed - ön ve arkasındaki boşlukları alır
    if(index > -1)
    {
        qInfo()<< name.remove(0,index+1).trimmed();
    }

    QString title = "Software Engineer";
    QString full = name.trimmed()+" "+ title;
    qInfo()<<full;

    //ToUft8- bir çok metin formatı bundadır.

    qInfo()<<full.toUtf8();

    return a.exec();
}
