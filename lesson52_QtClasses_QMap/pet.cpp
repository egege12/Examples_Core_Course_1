#include "pet.h"

pet::pet(QObject *parent)
    : QObject{parent}
{

}

int pet::Age() const
{
    return this->m_age;
}

void pet::setAge(int age)
{
    this->m_age = age;
}

QString pet::Name() const
{
    return this->m_name;
}

void pet::setName(const QString &name)
{
    this->m_name = name;
}
