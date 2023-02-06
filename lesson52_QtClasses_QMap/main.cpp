#include <QCoreApplication>
#include <QDebug>
#include "pet.h"

typedef QMap<QString,pet*> petList ;  // tekrar uzun tanımı yazmamak için typedef verdik. Artık bu container için petlist yazacağız.

petList createPets(int max){
    petList map;
    for(int i =0;i < max; i++){
        QString id = QString::number(i);
        pet* Pet = new pet();  // potansiyel hafıza taşması yaşanabilir.
        Pet->setAge(i*3);
        Pet->setName("Pet"+id);
        map.insert(id,Pet);  // map'e anahtarla bir şey eklenir.
    }
    return map;     //Qmap Qobject olmadığı için kopyalanabilir.
}

void displayPets (petList pets){
    foreach(QString key, pets.keys()){
        pet* Pet = pets.value(key);

        qInfo()<<key<<"Name is "<<Pet->Name()<<",Age is "<<Pet->Age();

    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    petList contPet = createPets(5);
    qInfo()<< "Eleman sayisi:" <<contPet.count();
    displayPets(contPet);

    pet* Pet = new pet();

    Pet->setAge(5);
    Pet->setName("Limon");
    contPet.insert("My cat", Pet);  // Anahtarlar eşsiz olmalı, eşi olursa eskisinin üstüne yazar
    displayPets(contPet);


    qInfo()<< "Eleman sayisi:" <<contPet.count();
    qDeleteAll(contPet.values()); // qDeleteAll hafıza kullanım alanındaki her şeyi temizler. Ancak pointer'a ihtiyaç duyar
    contPet.clear(); // Mapin içeriğini temizlemen gerekir.
    qInfo()<< "Eleman sayisi:" <<contPet.count();
    displayPets(contPet); //


    //Qmap and Iteretor

    QMap<int,QString> myStore;

    myStore.insert(1,"butter");
    myStore.insert(2,"milk");
    myStore.insert(3,"water");

    QMap<int,QString>::Iterator i;

    for(i = myStore.begin();i!=myStore.end();++i){
        qInfo()<<"Key:"<<i.key()<<"Value :"<<i.value();
    }

    return a.exec();
}
