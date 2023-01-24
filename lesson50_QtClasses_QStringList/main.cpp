#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = "Hello world how are you";
    QStringList lst = data.split(" ");
        // Qstring aslında QList<QString>.. türetimidir.
    qInfo()<<lst;

    foreach(QString const& str,lst){
        qInfo()<<str;
    }
        //sort
    lst.sort(Qt::CaseInsensitive);
    qInfo()<<lst;


    //contains - listede aranan obje var mı diye sorar

    QString myVar = "Hello";

    if(lst.contains(myVar)){

        int index = lst.indexOf(myVar);
         qInfo()<<"myVar founded in the list in position : "<< index;
    }

     return a.exec();
}
