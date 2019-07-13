#ifndef BMI_H
#define BMI_H

#include<string.h>
#include <QApplication>

using namespace std;

class bmi
{

public:

       bmi(){
           newHeight = 0.0;
           newWeight = 0.0;
       }

        bmi(double height ,double weight)
        {

        newHeight = height ;
        newWeight = weight ;
        }


      //  ~bmi();



        double getHeight()
        {
            return newHeight;
        }

        double getWeight()
        {
            return newWeight;
        }



        void setHeight (double height)
        {
            newHeight=height;
        }
        void setWeight (double weight)
        {
            newWeight=weight;
        }


        double calculateBMI()
        {
            newHeight= newHeight / 100;
            return (newWeight/(newHeight*newHeight));
        }


private:

    double newHeight;
    double newWeight;
};


#endif // BMI_H
