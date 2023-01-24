#ifndef CAT_H
#define CAT_H

#include <QObject>

class cat : public QObject
{
    Q_OBJECT
public:
    explicit cat(QObject *parent = nullptr);

signals:
    void run();
public slots:
    void scared();
};

#endif // CAT_H
