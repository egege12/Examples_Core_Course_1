#include <QCoreApplication>
#include <QDebug>

// QVector ve QList Qt5 ile aynı sınıflar olmuştur. Kullanılabilir ancak her şey aynıdır.

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString myData("Hello world how are you?");


    QList<QString> myList = myData.split(" ");

    foreach(QString const& contData , myList){
        qInfo()<<contData;
    }


    QList<int> myNumbers({123,23,42,5});

    myNumbers.append(8);
    myNumbers.remove(1);

    foreach(int const& a , myNumbers){
        qInfo()<<a;
    }

    return a.exec();
}
