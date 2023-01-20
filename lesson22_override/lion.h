#ifndef LION_H
#define LION_H

#include <QObject>
#include "felline.h"

class lion : public felline
{
    Q_OBJECT
public:
    explicit lion(QObject *parent = nullptr);

    void speak();

signals:

};

#endif // LION_H
