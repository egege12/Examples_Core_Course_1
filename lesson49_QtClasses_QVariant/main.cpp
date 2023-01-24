#include <QCoreApplication>
#include <QDebug>
#include <QVariant>

//QVariant kendi türünü kendi belirler.

void test (QVariant value){  // QObject olmadığı için kopyalanabilir.
    qInfo()<<value;
    int i = 0 ;
    bool ok = false;
    i = value.toInt(&ok);
    if(ok){
        qInfo()<<"It is int";
    }else{
        qInfo()<<"It is not int";
    }

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVariant value = (unsigned int)1;
    QVariant value2 = "Hellow World";

    test(value);
    test(value2);



    return a.exec();
}
