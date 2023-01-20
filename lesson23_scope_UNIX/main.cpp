#include <QCoreApplication>

// scope kullanımının önemi
/*
 * farklı fonksiyon ve sınıflarda kullanılan hatta farklı threadlerde aynı isimde değişkenlerin birbirini yazmasını engellemek için.
 * Scope ve namespace farklıdır, birisi sadece ön isim takar diğeri kapsam değiştirir.
 * Static scope
 * global ve statik scope'ları kullanmak
 * Dynamic scope
 *
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
