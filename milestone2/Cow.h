#ifndef _COW_HPP
#define _COW_HPP

#include <iostream>
#include "MeatProducer.h"
#include "MilkProducer.h"
using namespace std;

class Cow: virtual public MeatProducer, virtual public MilkProducer{
    public:
    //ctor deafult
    Cow();

    void printSound();
    bool isHungry();

    char render();

    private:
    int timeHungryCow; //lapar setelah timeLaparSapi
    bool isCowAlive; //true jika sapi hidup, false jika mati
};

#endif