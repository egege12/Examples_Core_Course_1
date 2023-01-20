#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include <QDebug>
class laptop : public QObject
{
    Q_OBJECT
public:
        //Constructor
    explicit laptop(QObject *parent = nullptr,QString name ="");

        //Deconstructor
    ~laptop();

    //Variables
    int weight;
    QString name;
    //Functions
    double asKilo();
    void test();
signals:

};

#endif // LAPTOP_H
