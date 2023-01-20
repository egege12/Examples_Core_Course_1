#ifndef SPORTSUV_H
#define SPORTSUV_H

#include <QObject>
//#include "suv.h"
//#include "sports.h"
class sportSUV : public QObject // , suv, sports   ->>> It give error when It is atempt to try
{
    Q_OBJECT
public:
    explicit sportSUV(QObject *parent = nullptr);

signals:

};

#endif // SPORTSUV_H
