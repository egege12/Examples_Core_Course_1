#include <QCoreApplication>
#include "gdxg.h"


// This lesson shows that automatic memory management in the way of standard library
// Next leeson will show that how we can manage it with Qt
int gdxg::count = 0;

void automanage(){

    std::unique_ptr<gdxg> uPtr(new gdxg()); // That class ing standard library manages the memory

    uPtr->test();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    automanage();
    automanage();
    automanage();
    automanage();
    return a.exec();
}
