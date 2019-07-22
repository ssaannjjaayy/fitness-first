#ifndef TIMER_H
#define TIMER_H

#include <QThread>

class timer : public QThread
{
    Q_OBJECT
public:
    explicit timer(QObject *parent=nullptr);
    void run();
    bool stop;
 signals:
    void numberChanged(int);
    void timerStopped(int);
};

#endif // TIMER_H


