#ifndef READASC_H
#define READASC_H

#include <QObject>
#include "dataCont.h"
#include <iterator>
#include <QDebug>
#include <QtGlobal>
#include <QFile>

class readasc : public QObject
{
    Q_OBJECT
private:
    QList<dataCont> oComInterface;
    QList<dataCont> iComInterface;

public:
    explicit readasc(QObject *parent = nullptr);

   bool readIIFile(QString path="");
   bool readIOFile(QString path="");
signals:

};

#endif // READASC_H
