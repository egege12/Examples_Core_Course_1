#ifndef DATACONT_H
#define DATACONT_H
#include <QVariant>
#include <QtGlobal>
#include <string>
#include <QTime>
class dataCont {

private:

    size_t length;   //length of data as bit
    unsigned int dataOffset; // data offset
    unsigned int byteOffset; // byte offset
    QString name; // name of variable
    QString rawtype;   // type
    QString comment; // comment of variable
    QString qtType;
    QVariant value; //value


    static long byteIndex;
public:

    bool setObject(QString name = "Null",QString type="Null",QString comment = "Null",unsigned int dataOffset=0 ){

        this->name = name;
        this->rawtype = type.toUpper();
        this->comment= comment;
        this->dataOffset=dataOffset;

        if (rawtype == "DINT"){
            this->length = 32;
            this->qtType = "int32";
            this->value = (qint32)0;;
        }else if ((rawtype == "DWORD") ||(rawtype == "UDINT")){
            this->length = 32;
            this->qtType = "uint32";
            this->value = (quint32)0;;
        }else if((rawtype == "UINT") || (rawtype == "WORD")){
            this->length = 16;
            this->qtType = "uint16";
            this->value = (quint16)0;;
        }else if(rawtype == "INT"){
            this->length = 16;
            this->qtType = "int16";
            this->value = (qint16)0;;
        }else if((rawtype == "SINT") || (rawtype == "USINT")){
            this->length = 8 ;
            this->qtType = "int8";
            this->value = (qint8)0;
        }else if(rawtype == "REAL"){
            this->length = 32;
            this->value = (qreal)0;
        }else if(rawtype == "TIME"){
            this->length = 32;
            this->value = (qint32)0;
        }else if(rawtype == "STRING"){
            this->length = 32*8;
            this->value = (QString)"";
        }
        this->byteOffset= byteIndex;
        dataCont::byteIndex = byteIndex + length;

    return true;
    };


    bool setValue(QVariant &Val){
        this->value = Val;
        return true;
    }

    const QVariant* getValue() {
        return &this->value ;
    }

};


#endif // DATACONT_H
