#include <QCoreApplication>
#include <QDebug>
void display (QString *value)
{
    qInfo()<<" Displayed object address : "<< value <<"value :"<< *value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString name = "Egemen"; // Stored in STACK
    QString *description ; // We create a pointer but It doesnt point anywhere yet
    delete description;
    QString *name2= new QString("Egemen"); // Stored in HEAP
    display(name2);
    delete name2;
    display(name2); // You can do that after deleting but It will no pointer. It will follow random address
    return a.exec();
}
