#include <QCoreApplication>
#include <QDebug>
void testval (QObject o){  // QObjects can not be copied It will not work when you call

    qInfo() << &o << Q_FUNC_INFO;
}
void testPtr (QObject* o){

    qInfo() << o << Q_FUNC_INFO;
}

QObject* getQObject ()
{
    QObject *o = new QObject(); // Warning!! It creates memory leaks
    return o;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QObject *o = getQObject();
    testPtr(o);
    //We never deleted the QObject object, It creates memory leaks

    delete o; // Now It is safe

    return a.exec();
}
