#ifndef TEST_H
#define TEST_H

#include <QObject>

class test : public QObject
{
    Q_OBJECT
    QString m_message;
public:
    explicit test(QObject *parent = nullptr);

    const QString &getMessage() const;
    void setMessage(const QString &newMessage);

signals:
    void messageChanged(QString message);
private:
    Q_PROPERTY(QString message READ getMessage WRITE setMessage NOTIFY messageChanged)

};

#endif // TEST_H
