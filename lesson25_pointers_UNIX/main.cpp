#include <QCoreApplication>
#include <QDebug>

void callVal (QString value){ // Make copy


    qInfo()<<"address : " << &value << "size :"<< value.length() ;
}
void callPtr (QString *Ptr){ // Dont copy

     qInfo()<<"Pointer address : " << &Ptr << "size :"<< Ptr->length() ; // Pointers address
    qInfo()<<"Object address : " << Ptr << "size :"<< Ptr->length() ;

}
void callRef (QString &Ref){ // Dont copy


    qInfo()<<"address : " << &Ref << "size :"<< Ref.length() ;

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString name = "Egemen";
    qInfo()<<"address : " << &name << "size :"<< name.length() ; // shows length of string
    callVal(name);
    callPtr(&name); // Hey take adress of that and show with an pointer
    callRef(name); // Hey take that object and find address

    return a.exec();
}
