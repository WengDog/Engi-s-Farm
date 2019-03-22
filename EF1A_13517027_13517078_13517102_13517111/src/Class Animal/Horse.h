#ifndef _HORSE_HPP
#define _HORSE_HPP

#include <iostream>
#include "MilkProducer.h"
using namespace std;

class Horse: virtual public MilkProducer{
    public:
    //ctor default
    Horse();

    void printSound();
    bool isHungry();

    char render();
    private:
    int timeHungryHorse; //lapar setelah timeLaparKuda
    bool isHorseAlive; //true jika kuda hidup, false jika mati
};

#endif