#include "timer.h"
#include <QtCore>
timer::timer(QObject *parent):QThread (parent){


}
void timer :: run()
{
    for(int i=120;i>=0;i--){

     //  QMutex mutex;
     //   mutex.lock();
        if( this -> stop){

          emit timerStopped(i);
        };
      // mutex.unlock();

        emit numberChanged(i);
        this->msleep(100);

    }

}

