#ifndef _GOAT_HPP
#define _GOAT_HPP

#include <iostream>
#include "MeatProducer.h"
using namespace std;

class Goat: virtual public MeatProducer{
    public:
    //ctor default
    Goat();

    //pure virtual
    void printSound();
    int getEndurance();
    int getEndurance_Default();
    void setEndurance(int);
    char render();
    
    private:
    bool isGoatAlive; //true jika kambing hidup, false jika mati
};

#endif