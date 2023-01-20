#include <QCoreApplication>
#include <QDebug>


/* you cant, because you create a variable and trying to return It, It makes a copy of that variable
 *QObject get_object(QString name) {
    QObject o;
    o.setObjectName(name);
    return o;  //Call to delted constructor of "QObject"
}*/
/* You shouldn do that because you created an object and C++ will desconstruct It because It is local variable and you are trying to return deconstructed variable's address
 * It builts but not works
QObject& get_ref(QString name) {
   QObject o;   ->> That means "I want to create a variable but you handle the memory management"
   o.setObjectName(name);
   return o;  //Call to delted constructor of "QObject"
}*/
QObject* get_ptr(QString name) {
   QObject *o = new QObject();//   ->> That means "I want to create a variable and I will handle the memory management"
   o->setObjectName(name);
   return o;  //will not be deleted
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject *o3 = get_ptr("get_ptr");
    qInfo()<< o3->objectName();
    delete o3; // we are telling to computer you can free that address
    return a.exec();
}
