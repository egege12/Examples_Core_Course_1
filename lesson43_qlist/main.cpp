#include <QCoreApplication>
#include <QList>
#include <QVariant>


class mycore{
public:
        QVariant value;
        QString mm;

void setVal(qint16 m){
this->value = m;
}

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    mycore cc;
    QVariant data = "Hellow world";
    QList<mycore> list;

    list.append(cc);



    return a.exec();
}
