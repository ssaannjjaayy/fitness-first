#ifndef HOME_H
#define HOME_H

#include <QMainWindow>

namespace Ui {
class Home;
}

class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr,QString username="user");
    ~Home();

private:
    Ui::Home *ui;
};

#endif // HOME_H
