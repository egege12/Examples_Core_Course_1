#ifndef CARS_H
#define CARS_H

#include <QObject>
#include <QDebug>

class cars : public QObject
{
    Q_OBJECT
public:
    explicit cars(QObject *parent = nullptr);

    ~cars();
signals:

};

#endif // CARS_H
