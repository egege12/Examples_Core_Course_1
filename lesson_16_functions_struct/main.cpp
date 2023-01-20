#include <QCoreApplication>
#include <QDebug>

// It is possible to use that way but If you dont use classes you shouldnt use the functions in struct
struct laptop
{
    int weight;

    double asKilograms(){
        return weight *0.453592;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    laptop notebook;

    notebook.weight = 5;

    qInfo()<<"Pounds :" << notebook.weight;
    qInfo()<<"Kilograms"<< notebook.asKilograms();


    return a.exec();
}
