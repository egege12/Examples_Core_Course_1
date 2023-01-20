#include <QCoreApplication>
#include <QDebug>
/*
    Hello World application

*/
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
/*  Lesson 1 Using QDebug - qInfo()
    qInfo() << "Hello World \n Yes you remember";
*/


/*  Lesson 2 Variables
    bool isOn = false;
    bool lightSwitch = true;

    qInfo() << "Is on:" << isOn;
*/


/* Lesson 3
   // declare it
   int age = 44;
   double height = 180.2;
   //print it
   qInfo () << "Age: "<< age;
   qInfo () << "Height: "<< height;


*/


/* Lesson 4 data lengths
    bool        nbool ;
    short       nshort;
    int         nint  ;
    unsigned    nuint ;
    double      ndouble ;
    long double nlongdouble;
    float       nfloat ;

    qInfo() <<"Size of variable " << sizeof(nbool)      <<"\t bytes";
    qInfo() <<"Size of variable " << sizeof(nshort)     <<"\t bytes";
    qInfo() <<"Size of variable " << sizeof(nint)       <<"\t bytes";
    qInfo() <<"Size of variable " << sizeof(nuint)      <<"\t bytes";
    qInfo() <<"Size of variable " << sizeof(ndouble)    <<"\t bytes";
    qInfo() <<"Size of variable " << sizeof(nlongdouble)<<"\t bytes";
    qInfo() <<"Size of variable " << sizeof(nfloat)     <<"\t bytes";
*/



/* Lesson 5 - Constants


    const bool ls5bool = false;  // read-only
    const int ls5int = 44 ;  // read- only
    const float pi = 3.14 ;
    // If you assign a value , It wouldnt be compiled

*/


/* Lesson 6 - Enums

 //   unsigned short red = 0;
 //   unsigned short green=1;
 //   unsigned short blue = 234;


    enum Color{red=2,green=4,blue}; // It only expects integer values and If you initialize first item with number It counts up one by one

    Color mycolor = Color::blue;
    qInfo()<< "My color is " << mycolor;
*/


    return a.exec();
}
