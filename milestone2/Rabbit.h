#ifndef _RABBIT_HPP
#define _RABBIT_HPP

#include <iostream>
#include "MeatProducer.h"
using namespace std;

class Rabbit: virtual public MeatProducer{
    public:
    //ctor default
    Rabbit();

    //implementasi pure virtual
    void printSound();
    int getEndurance();
    int getEndurance_Default();
    void setEndurance(int);
    char render();
    bool getIsProductable()=0;
    void setIsProductable(bool)=0;
    
    private:
    bool isRabbitAlive; //true jika kelinci hidup, false jika mati
};

#endif