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

    //pure virtual
    void printSound();
    int getEndurance();
    int getEndurance_Default();
    void setEndurance(int);
    char render();
    bool getIsProductable()=0;
    void setIsProductable(bool)=0;

    private:
    bool isDuckAlive; //true jika bebek hidup, false jika mati
};

#endif