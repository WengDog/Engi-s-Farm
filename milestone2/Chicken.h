#ifndef _CHICKEN_HPP
#define _CHICKEN_HPP

#include <iostream>
#include "EggProducer.h"
using namespace std;

class Chicken: virtual public EggProducer{
    public:
    //ctor default
    Chicken();

    //implementasi pure virtual
    void printSound();
    int getEndurance();
    int getEndurance_Default();
    void setEndurance(int);

    char render();
    
    private:
    bool isChickenAlive; //true jika ayam hidup, false jika mati
};

#endif