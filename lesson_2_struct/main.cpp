#include <QCoreApplication>
#include <QDebug>

enum Colors{Red,Green,Blue};  // It is outside of a function, that means It has global usage

struct product
        {
        int weight;
        double value;
        Colors color;
        };

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

// Call by value

  product laptop{23,42,Blue};
    qInfo() << "Size is "<< sizeof(laptop);
    qInfo()<< laptop.color;
    qInfo()<< laptop.value;
    qInfo()<< laptop.weight;

/* Call by reference -> It gives warning and crash learn why - Because It is not pointing any object
    product *bus;

    bus->color= Blue;
    qInfo() << bus->color ;
    qInfo() << bus->value ;
    qInfo() << bus->value ;
*/
   return a.exec();
}
