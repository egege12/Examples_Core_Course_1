#include <QCoreApplication>
#include <QDebug>
#include "kadjar.h"
#include "sports.h"
void objtester(suv &object)
{
    object.isHigh();
}
void objtester(sports &object)
{
    object.isHigh();
}
void objcreator()
{
    kadjar mycar;
   // suv anysuv;
   // sports anysport;
    objtester(mycar);
    //objtester(anysuv);
    //objtester(anysport);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
  objcreator();

    return a.exec();
}
