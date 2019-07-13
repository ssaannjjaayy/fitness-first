#include "home.h"
#include "ui_home.h"
#include"bmi.h"
#include"db_fitnessfirst.h"
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

void Home::on_pushButton_3_clicked(QString bmicalc)
{
     QSqlQuery queryAdd;
    double weight = ui-> lineEdit_2 -> text().toDouble();

    double height = ui-> lineEdit-> text().toDouble();
    bmi b1(height,weight);

    ui->label_4-> setText(QString::number( b1.calculateBMI() ));
    queryAdd.prepare("update user set bmicalc"); //='" b1.calculateBMI() "'"); // where bmicalc='" b1.calculateBMI()"'");
    queryAdd.bindValue(":bmicalc",b1.calculateBMI());
}


void Home::on_pushButton_4_clicked()
{
    ui->homeStack->setCurrentIndex(2);

}

void Home::on_pushButton_5_clicked(QString bmicalc)
{
    bool *ok = nullptr ;
   if(bmicalc.toDouble(ok)>25)
   {
       ui->label_7->setText("High on BMI loose some fat fatty ");
   }


}
