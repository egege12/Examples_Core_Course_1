#ifndef GDXG_H
#define GDXG_H

#include <QObject>

class gdxg : public QObject
{
    Q_OBJECT
public:
    static int count;
    explicit gdxg(QObject *parent = nullptr);

    void test ();
    ~gdxg();

signals:


};

#endif // GDXG_H
