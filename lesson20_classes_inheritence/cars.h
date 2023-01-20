#ifndef CARS_H
#define CARS_H

#include <QObject>

class Cars : public QObject
{
    Q_OBJECT
public:
    explicit Cars(QObject *parent = nullptr);

signals:

};

#endif // CARS_H
