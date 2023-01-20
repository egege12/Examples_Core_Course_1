#include <QCoreApplication>
#include <QDate>
#include <QTime>
#include <QDateTime>
#include <QDebug>
#include <QByteArray>
#include <QStringList>
void printDateTime(QTime & time){

    qInfo()<<time;

}
void printDateTime(QDate date){

    qInfo()<<date.toString(Qt::DateFormat::ISODate);
    qInfo()<<date.toString(Qt::DateFormat::RFC2822Date);
    qInfo()<<date.toString(Qt::DateFormat::TextDate);

}
void printDateTime(QDateTime datetime){

    qInfo()<<datetime.toString(Qt::DateFormat::ISODate);
    qInfo()<<datetime.toString(Qt::DateFormat::RFC2822Date);
    qInfo()<<datetime.toString(Qt::DateFormat::TextDate);
}


int main(int argc, char *argv[])
{

/**********************************
 * Date & Time
 *********************************/
    QCoreApplication a(argc, argv);
    QTime *now = new (QTime);
    *now = QTime::currentTime();
    QDate today = QDate::currentDate();
    QDateTime current = QDateTime::currentDateTime();

    printDateTime(*now);
    printDateTime(today);
    printDateTime(current);

    *now=now->addMSecs(2000);
    printDateTime(*now);
    today=today.addDays(5);
    printDateTime(today);
    current= current.addDays(100);
    printDateTime(current);
    delete now;
/**********************************
* QString
*********************************/
    QString line= "			Data_1: BYTE:=0;";
    QString comment="				(*comment1*)";
    qsizetype index ;
    if (comment.indexOf("(*")!= -1){
        comment= comment.trimmed();
        comment= comment.replace("(*","/*");
        comment= comment.replace("*)","*/");
    }
    QString contline=line;
    qsizetype contindex=contline.indexOf(": ");
    contline=contline.remove(0,contindex);
    contindex=((contline.indexOf(":=")-2));
    contline=contline.mid(2,contindex);
    line = line.trimmed();
    index= line.indexOf(":");
    qInfo()<<line.mid(0,index)<<comment<<contline;
 /**********************************
 * Qbytearray
 *********************************/
    QByteArray fun;

    fun= comment.toLocal8Bit();
    qInfo()<<fun.at(1)<<fun.at(2);
    fun=fun.toBase64();
    fun=fun.toHex();
    qInfo()<<fun;
/**********************************
* QStringList
*********************************/
    QString line2= "			Data_1: BYTE:=0;";
    QStringList lst=line2.trimmed().split(" ");
    qInfo()<<lst;

    if (lst.contains("BYTE:=0;")){
        int i = lst.indexOf("BYTE");
        qInfo()<<lst.value(i);
    }
    return a.exec();
}
