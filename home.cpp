#include "home.h"
#include "ui_home.h"
#include"bmi.h"
#include"db_fitnessfirst.h"
#include"fitnessfirst.h"
#include"calories.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>


Home::Home(QWidget *parent,QString username) :
    QMainWindow(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
     ui->homeStack->setCurrentIndex(0);
     ui->name->setText("Welcome "+username);
    this->username = username;
}


Home::~Home()
{
    delete ui;
}

    void Home::on_pushButton_clicked()
{
    QString username ;
      ui->homeStack->setCurrentIndex(0);

}

void Home::on_pushButton_2_clicked()
{
     ui->homeStack->setCurrentIndex(1);
}

void Home::on_pushButton_3_clicked()
{
        db_fitnessFirst db_f1("database.db") ;
      /*QSqlDatabase mydb = QSqlDatabase::addDatabase("ODBC");
      mydb.setConnectOptions();
      mydb.setDatabaseName("D:/qt/build-FitnessFirst-Desktop_Qt_5_12_3_MinGW_32_bit-Debug/database.db");*/
    double weight = ui-> lineEdit_2 -> text().toDouble();

    double height = ui-> lineEdit-> text().toDouble();
    bmi b1(height,weight);

    ui->label_4-> setText(QString::number( b1.calculateBMI() ));
    QString bmival = QString::number(b1.calculateBMI());
    //QString stmt = "select * from user where Username='"+ username +"'";

//    QSqlQuery qry;
//    QString a;
//    if(db_f1.userAuth(username,a))
//    {

//        QSqlQuery queryAdd;
//        queryAdd.prepare("INSERT INTO user(bmicalc) VALUES (:bmival);");
//        /*int count = 0;

//        while(qry.next())
//            count++;
//        if( count == 1 ){
//            qry.exec("INSERT INTO user (bmicalc) VALUES('"+bmival+"');");
//          }*/
//    }
    qDebug()<<username;
    db_f1.addBmiData(username,bmival);


}


void Home::on_pushButton_4_clicked()
{
    ui->homeStack->setCurrentIndex(2);
    //QLabel *label_5;
    //label_5->openExternalLinks(true);
   // ui->label_5->setText("<a href=\"http://www.qtcentre.org\">QtCentre</a>");
   // ui->label_8->setText("Name:Manish Baral\ncontact number:9863474868\ne-mail:manishbaral112@gmail.com");
}

void Home::on_pushButton_5_clicked()
{
    ui->homeStack->setCurrentIndex(3);

}



void Home::on_pushButton_6_clicked()
{
    int i ;
    int total=0;
    calories *c ;
    chickenBreast *f1 ;
    milk *f2 ;
    egg *f3 ;

    oatmeal *f4;

    int calc = ui->spinBox -> text().toInt() ;
    for(i=0;i<calc;i++){
       // c= f1 ;

        total = total + (f1->foods()) ;
    }

    int calc2 = ui->spinBox_2 -> text().toInt();
    for(i=0;i<calc2;i++){
       // c=f2 ;
        total = total + (f2->foods()) ;
    }
     int calc3 = ui->spinBox_3 -> text().toInt();
     for(i=0;i<calc3;i++){
         //c=f3 ;
         total = total + (f3->foods()) ;
     }
     int calc4 = ui->spinBox_4 -> text().toInt();
     for(i=0;i<calc4;i++){
        // c=f4 ;
         total = total + (f4->foods()) ;
     }


     //total = calc + calc2 + calc3 ;
    ui->label_7->setText(QString::number(total));
}
