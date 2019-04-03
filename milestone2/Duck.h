#ifndef _DUCK_HPP
#define _DUCK_HPP

#include <iostream>
#include "EggProducer.h"
#include "MeatProducer.h"
using namespace std;

class Duck: virtual public EggProducer, virtual public MeatProducer{
    public:
    //ctor default
    Duck();

    void printSound();
    bool isHungry();

    char render();
    private:
    int timeHungryDuck; //lapar setelah timeLaparBebek
    bool isDuckAlive; //true jika bebek hidup, false jika mati
};

#endif