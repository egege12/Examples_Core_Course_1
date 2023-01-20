#include <QCoreApplication>
#include "test.h"

/*/
 *          QTimer
 *
 *
 *
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test customTest;
    a.connect(&customTest,&test::notify,&a,&QCoreApplication::quit,Qt::QueuedConnection);
    return a.exec();
}
