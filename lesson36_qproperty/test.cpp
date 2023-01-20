#include "test.h"

const QString &test::getMessage() const
{
    return this->m_message;
}

void test::setMessage(const QString &newMessage)
{
    if (this->m_message == newMessage)
        return;
    this->m_message = newMessage;
    emit messageChanged(this->m_message);
}

test::test(QObject *parent)
    : QObject{parent}
{

}
