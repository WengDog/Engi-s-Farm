#ifndef _HORSE_HPP
#define _HORSE_HPP

#include <iostream>
#include "MilkProducer.hpp"
using namespace std;

class Horse: public MilkProducer{
    public:
    //ctor default
    Horse();

    void printSound();
    bool isHungry();

    private:
    int timeHungryHorse; //lapar setelah timeLaparKuda
    bool isHorseAlive; //true jika kuda hidup, false jika mati
};

#endif