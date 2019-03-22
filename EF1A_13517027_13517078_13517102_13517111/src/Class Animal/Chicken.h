#ifndef _CHICKEN_HPP
#define _CHICKEN_HPP

#include <iostream>
#include "EggProducer.h"
using namespace std;

class Chicken: virtual public EggProducer{
    public:
    //ctor default
    Chicken();

    void printSound();
    bool isHungry();

    char render();
    
    private:
    int timeHungryChicken; //lapar setelah timeLaparAyam
    bool isChickenAlive; //true jika ayam hidup, false jika mati
};

#endif