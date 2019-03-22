#ifndef _GOAT_HPP
#define _GOAT_HPP

#include <iostream>
#include "MeatProducer.h"
using namespace std;

class Goat: virtual public MeatProducer{
    public:
    //ctor default
    Goat();

    void printSound();
    bool isHungry();

    char render();
    
    private:
    int timeHungryGoat; //lapar setelah timeLaparKambing
    bool isGoatAlive; //true jika kambing hidup, false jika mati
};

#endif