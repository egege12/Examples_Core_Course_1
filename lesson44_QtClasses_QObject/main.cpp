#include <QCoreApplication>
#include "dog.h"
#include "cat.h"

//QObjeler signal ve slot özelliğini kullanılmasını



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    dog myDog;
    cat myCat;
    myDog.setObjectName("Alex"); // Bu metot ile Qobjeclerin adını verebilirsin.
    myCat.setObjectName("Mia");
    QObject::connect(&myDog,&dog::bark,&myCat,&cat::scared,Qt::UniqueConnection); // Bağlantı tipini de örnek olsun diye belirttik.
    QObject::connect(&myCat,&cat::run,&myDog,&dog::chase,Qt::UniqueConnection);
    emit myDog.bark();  // Tetik vermek için kullandık.
    return a.exec();
}
