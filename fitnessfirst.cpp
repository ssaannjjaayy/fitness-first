#include "fitnessfirst.h"
#include "ui_fitnessfirst.h"


fitnessFirst::fitnessFirst(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fitnessFirst)
{
    ui->setupUi(this);
    ui->mainStack->setCurrentIndex(0);
}

fitnessFirst::~fitnessFirst()
{
    delete ui;
}

void fitnessFirst::on_homeButton_clicked()
{
    ui->mainStack->setCurrentIndex(0);
}

void fitnessFirst::on_loginButton_clicked()
{
    ui->mainStack->setCurrentIndex(1);
}




void fitnessFirst::on_registerButton_clicked()
{
    ui->mainStack->setCurrentIndex(2);

}

void fitnessFirst::on_registerDone_clicked()
{
    QString firstName , lastName , username , password , gender , weight , height , age ;
    firstName = ui->s_lineeditfirstname->text();
    lastName = ui->s_lineeditfirstname->text();
    username = ui->s_lineeditfirstname->text();
    password = ui->s_lineeditfirstname->text();
    gender = ui->s_lineeditfirstname->text();
     weight = ui->s_lineeditfirstname->text();
     height = ui->s_lineeditfirstname->text();
     age = ui->s_lineeditfirstname->text();

     if(firstName == "") {
       //show error
     }
     else {
         //add into database
         db_fitnessFirst db_f1("database.db") ;
         db_f1.createTable();
         db_f1.addUser(
             firstName,
             lastName,
             username,
             password,
             gender,
             weight,
             height,
             age
         );
     }


}
