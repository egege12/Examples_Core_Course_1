#include <QCoreApplication>
#include <QDebug>
#include "animal.h"
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test *parent = new test(&a); // We give a parent to the function, that means It will be deleted when the a is deleted

    parent ->dog = new animal( parent); // We gave the parent another class, when the Test class object deleted, It deletes Itself
    delete parent; // deleting test class object, and animal also deleted because of parent relation
      // If we dont delete, we already give test class in &a as a parent to the test. It will be deleted when the application is terminated.

    return a.exec();
}
