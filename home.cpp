#include "home.h"
#include "ui_home.h"

Home::Home(QWidget *parent,QString username) :
    QMainWindow(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    ui->name->setText("Welcome "+username);
}

Home::~Home()
{
    delete ui;
}
