#ifndef _HORSE_HPP
#define _HORSE_HPP

#include <iostream>
#include "MilkProducer.h"
using namespace std;

class Horse: virtual public MilkProducer{
    public:
    //ctor default
    Horse();

    //implementasi pure virtual
    void printSound();
    int getEndurance();
    int getEndurance_Default();
    void setEndurance(int);
    char render();
    bool getIsProductable()=0;
    void setIsProductable(bool)=0;

    private:
    bool isHorseAlive; //true jika kuda hidup, false jika mati
};

#endif