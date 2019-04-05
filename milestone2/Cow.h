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
    
    //Implementasi pure virtual
    void printSound();
    char render();
    int getEndurance();
    int getEndurance_Default();
    void setEndurance(int);
    bool getIsProductable()=0;
    void setIsProductable(bool)=0;

    private:
    bool isCowAlive; //true jika sapi hidup, false jika mati
};

#endif