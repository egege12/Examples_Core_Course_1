#include <QCoreApplication>
#include <iostream>// standard i/o library
#include <QDebug> // Q i/o library

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // C++ way
    /*
    cout << "Hello again World" << endl; // end of line operator
    // Qt way
    qInfo()<< "Hello again World";
    */
    // What is the differences - peoples uses qt way because more complex reported system is working behind for other application or features.
//lesson 1 - cout
 /*
    int age = 44;
    cout << age ;
    cout << endl;
    cout << flush; // That means we are done with giving bunch of data , you can print them
  */
//lesson 2- cin
/*
    qInfo()<<"Please enter age : \n";
    int age=0;
    cin>> age;
    qInfo()<<"You entered: " << age;
*/
// lesson 3 - cerr -> standart error output
    //Standart out
    cout << "Standart out"<< endl;
    //Standart err
    cerr << "Standart error";
    return a.exec();
}
