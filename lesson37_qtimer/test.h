#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QTimer>

class test : public QObject
{
    unsigned int count;
    Q_OBJECT
public:
    explicit test(QObject *parent = nullptr);

signals:
    void notify();
public slots:
    void timeout();
private:
    QTimer m_timer;
};

#endif // TEST_H
