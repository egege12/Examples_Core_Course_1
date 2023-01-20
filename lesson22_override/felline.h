#ifndef FELLINE_H
#define FELLINE_H

#include <QObject>
#include <QDebug>
class felline : public QObject
{
    Q_OBJECT
public:
    explicit felline(QObject *parent = nullptr);

    void speak();

signals:

};

#endif // FELLINE_H
