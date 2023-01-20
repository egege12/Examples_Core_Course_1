#include <QCoreApplication>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal cat,dog,fish;
    cat.setObjectName("Cat");
    dog.setObjectName("Dog");
    fish.setObjectName("Fish");

    cat.speak("Meoov");
    dog.speak("Hav Hav");
    fish.speak("I speak only English");

    return a.exec();
}
