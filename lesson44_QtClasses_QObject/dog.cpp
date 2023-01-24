#include "dog.h"
#include <QDebug>
dog::dog(QObject *parent)
    : QObject{parent}
{

}

void dog::chase()
{
    qInfo()<<"I am following"<< sender();
}
