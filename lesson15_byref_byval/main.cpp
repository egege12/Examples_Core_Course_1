#include <QCoreApplication>
#include <QDebug>
#include <array>

using namespace std;
// It refers actual object and changes it
void testByRef(int *ref)
{

    *ref = *ref * 5;
    qInfo()<<"Adress of value"<<ref;
}

// It copies the variable when It called, generally object do not like being copied
void testByVal(int Val)
{
    Val = Val * 5;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int value = 5;
    testByRef(&value);
    qInfo()<<"Value by ref :"<<value;
    testByVal(value);
    qInfo()<<"Value by val :"<<value;
    return a.exec();
}
