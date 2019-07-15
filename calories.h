#ifndef CALORIES_H
#define CALORIES_H

#include<QDebug>

class calories
{
public:
   // calories();
     virtual double foods()=0;
   // ~calories();
};

class chickenBreast : public calories {
public:
    chickenBreast();
    double food(){
        qDebug()<<"sss";
        return 165 ;
    }
   // ~chickenBreast();
};

class milk : public calories {
public:
    milk();
    double food(){
        qDebug()<<"sss";
        return 149 ;
    }
   // ~milk();
};
class egg : public calories {
public:
    egg();
    double food(){
        qDebug()<<"sss";
        return 52;
    }
   // ~egg();
};
class oatmeal : public calories {
public:
    oatmeal();
    double food(){
        return 68 ;
    }
   // ~oatmeal();
};


#endif // CALORIES_H
