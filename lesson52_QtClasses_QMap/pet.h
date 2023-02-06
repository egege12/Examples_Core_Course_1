#ifndef PET_H
#define PET_H

#include <QObject>

class pet : public QObject
{
    Q_OBJECT
    int m_age;
    QString m_name;

public:
    explicit pet(QObject *parent = nullptr);

    int Age() const;
    void setAge(int age);

    QString Name() const;
    void setName(QString const& name);

};

#endif // PET_H
