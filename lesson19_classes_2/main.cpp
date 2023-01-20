#include <QCoreApplication>
#include "laptop.h"

void test (laptop *machine) // or  void test (laptop &machine)
{
    machine->test();
}
void makeLaptops()
{
    laptop mine (nullptr,"my laptop");
    laptop yours(nullptr,"your laptop");
    mine.weight= 4;
    yours.weight= 5;
    test(&mine); // or test(mine) If you use reference
    test(&yours); // or test (yours) If you use reference

}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    makeLaptops();
    return a.exec();
}
