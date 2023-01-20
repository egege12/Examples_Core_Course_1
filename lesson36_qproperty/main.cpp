#include <QCoreApplication>
#include <QDebug>
#include "watcher.h"
#include "test.h"
#include <QVariant>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    watcher customWatcher;
    test    customTest;

    QObject::connect(&customTest,&test::messageChanged,&customWatcher,&watcher::messageChanged);

    customTest.setProperty("message",QVariant("Hello world"));

    return a.exec();
}
