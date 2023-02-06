#include <QCoreApplication>
#include "test.h"


/// We can make classes template
///
///
///


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test<int> intCalc;
    qInfo()<<intCalc.add(1,4);
    Test<double> dobuleCalc;
    qInfo()<<dobuleCalc.add(1.3,4.5);
    Test<QString> StringCalc;
    qInfo()<<StringCalc.add("1.3","4.5");
    return a.exec();
}
