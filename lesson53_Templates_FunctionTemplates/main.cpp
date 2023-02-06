#include <QCoreApplication>

// Basitçe template'leri her tipte işlem yapabilecek fonksiyonlar oluşturmak için yapabilirsin

template<typename T>
void print(T value){
    qInfo() << value;
}

template<class T, class F>  // class ve template neredeyse aynıdır. Class template'i kapsar. Class ismiyle kullansan daha iyi typename yerine.
T add(T valueT, F valueF)
{
    return valueT + valueF;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    print<int>(1);
    print<double>(2.34);
    print<QString>(QString("Hello"));



 //Hata durumları 1

    qInfo()<< add<int,double>(2,2.4);
    qInfo()<< add(2,2.4);
    qInfo()<< add(2,true);  // 2 + (int)true yapar 3 bulur.
    //qInfo()<< add(true,2);  // çöker çünkü true + 2 yapıp boola'a atamaya çalışır.
    qInfo()<< add("true",2); // anlamsız sonuçlar çıkar
    return a.exec();
}
