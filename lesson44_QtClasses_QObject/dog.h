#ifndef DOG_H
#define DOG_H

#include <QObject>

class dog : public QObject
{
    Q_OBJECT
public:
    explicit dog(QObject *parent = nullptr);

signals:
    void bark();
 public slots:
    void chase();
};

#endif // DOG_H
