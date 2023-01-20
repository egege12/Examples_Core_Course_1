#ifndef OWNER_H
#define OWNER_H

#include <QObject>

class owner : public QObject
{
    Q_OBJECT
public:
    explicit owner(QObject *parent = nullptr);

    void giveSnacks();
signals:
    void treat();
};

#endif // OWNER_H
