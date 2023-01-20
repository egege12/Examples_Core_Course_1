/*
 *
 *  Arrays
 * Notes:
 *
 * First position is always zero
 * Major flaw of array : It has a limit
 * If you exceed by accesing elements more than your array, program may be crashes but It is not reliable.
 *
 */
#include <QCoreApplication>
#include <QDebug>


//It can be defined without standard library
#include <array>
// Use namespace because It is standard library
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
///Type 1
    // Zero based index array
    // Non-standard library
    int ages[4] = {24,7,34,1000};
    qInfo()<<"Number 1 "<< ages[0];
    qInfo()<<"Number 2 "<< ages[1];
    qInfo()<<"Number 3 "<< ages[2];
    qInfo()<<"Number 4 "<< ages[3];
    qInfo()<<"Size:"<< sizeof(ages);
    //qInfo()<<"Size:"<< ages.size(); *** You cant use with non-standard arrays


///Type 2 - Standard c++
    //Zero based index array
    //standard C++ library
    array<int,5> cars ={24,7,34,1000,4};
    qInfo()<<"Number 1 "<< cars[0];
    qInfo()<<"Number 2 "<< cars[1];
    qInfo()<<"Number 3 "<< cars[2];
    qInfo()<<"Number 4 "<< cars[3];
    qInfo()<<"Number 5 "<< cars[4];
    qInfo()<<"Size:"<< cars.size(); // size of elements
    qInfo()<<"Size of:"<< sizeof(cars); // total bytes
    qInfo()<<"Size:"<< cars[cars.size()-1]; // printing last element


    return a.exec();
}
