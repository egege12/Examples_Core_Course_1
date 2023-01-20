#include <QCoreApplication>
#include "owner.h"
#include "dog.h"
/**
 *Qt::AutoConnection            0   (Default) If the receiver lives in the thread that emits the signal, Qt::DirectConnection is used. Otherwise, Qt::QueuedConnection is used. The connection type is determined when the signal is emitted.
Qt::DirectConnection            1   The slot is invoked immediately when the signal is emitted. The slot is executed in the signalling thread.
Qt::QueuedConnection            2   The slot is invoked when control returns to the event loop of the receiver's thread. The slot is executed in the receiver's thread.
Qt::BlockingQueuedConnection    3   Same as Qt::QueuedConnection, except that the signalling thread blocks until the slot returns. This connection must not be used if the receiver lives in the signalling thread, or else the application will deadlock.
Qt::UniqueConnection            4   This is a flag that can be combined with any one of the above connection types, using a bitwise OR. When Qt::UniqueConnection is set, QObject::connect() will fail if the connection already exists (i.e. if the same signal is already connected to the same slot for the same pair of objects). This flag was introduced in Qt 4.6.
Qt::SingleShotConnection        5   This is a flag that can be combined with any one of the above connection types, using a bitwise OR. When Qt::SingleShotConnection is set, the slot is going to be called only once; the connection will be automatically broken when the signal is emitted. This flag was introduced in Qt 6.0.
 *
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    dog myDog;
    owner justMe;

    QObject::connect(&justMe,&owner::treat,&myDog,&dog::treat);  // makes automatic connection
    QObject::connect(&justMe,&owner::treat,&myDog,&dog::treat);  // makes automatic connection second time and calls two time that slot
    QObject::connect(&justMe,&owner::treat,&myDog,&dog::treat,Qt::UniqueConnection); // If ones connected It will pass
    justMe.giveSnacks();

    return a.exec();
}
