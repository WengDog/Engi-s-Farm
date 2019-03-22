#ifndef _RABBIT_HPP
#define _RABBIT_HPP

#include <iostream>
#include "MeatProducer.h"
using namespace std;

class Rabbit: virtual public MeatProducer{
    public:
    //ctor default
    Rabbit();

    void printSound();
    bool isHungry();

    char render();
    
    private:
    int timeHungryRabbit; //lapar setelah timeLaparKelinci
    bool isRabbitAlive; //true jika kelinci hidup, false jika mati
};

#endif