#include <QCoreApplication>
#include "lion.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    lion bigCat;
    felline smallCat;

    bigCat.speak();
    smallCat.speak();
    return a.exec();
}
