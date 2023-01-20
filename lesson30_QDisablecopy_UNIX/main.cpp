#include <QCoreApplication>

//https://code.qt.io/cgit/qt/qtbase.git/tree/src/corelib/kernel/qobject.h
//Q_DISABLE_COPY(QObjectData)
// Upper word is dispalbes copy.
//Qt doesnt like copy and moving because It has classes that communicates with eachother


//Q_DISABLE_MOVE
//disables move
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
