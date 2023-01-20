#include <QCoreApplication>
#include <QDebug>
#include <iostream>


struct myIssue : public std::exception
        {
    const char *description;
    const char *what() const throw()
    {
        return "Because";
    }

};


bool doDiv (){
    try {
        qInfo()<<"Please enter number";
        float number1=0.0;
        std::cin>>number1;
        float number2=0.0;
        qInfo()<<"Please enter second number";
        std::cin>>number2;
        if(number2!=0.0 && number2 != 1.0 && number2!= -1 && number1!=-1 && number2!= -2 && number1!=-2){
            float division = number1 / number2;
            qInfo("%0.2f",division);
        }else if(number2 ==1.0){
            throw QString("Division by 1 returns the number itself!");
        }else if(number2==0.0){
            throw 99;
        }else if(number2==-1 || number1==-1){
            throw std::runtime_error("Exit code entered");
        }else if(number2==-2 || number1==-2){
            myIssue e;
            e.description ="you entered -2";
            throw e;
        }
    } catch (QString e) {
        qWarning()<<e;
    }
      catch (int) {
         qCritical()<<"Program might be crashed! Be careful!!!";
         return false;
    }
    catch (myIssue &e){  // önce bunu yazmalısın çünkü türev sınıf olduğu için  exceptiona da girerdi.
            qCritical()<<e.what()<<" "<< e.description;
    }
    catch (std::exception const& e) {
            qCritical()<<e.what();
       return false;
  }


    return true;
}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    bool cond= true;
    do{
        cond=doDiv();
    }while(cond);

    return a.exec();
}
