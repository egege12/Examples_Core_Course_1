#ifndef KADJAR_H
#define KADJAR_H

#include <QObject>
#include "suv.h"
#include <QDebug>
class kadjar : public suv
{
    Q_OBJECT
public:
    explicit kadjar(QObject *parent = nullptr);

signals:

};

#endif // KADJAR_H
