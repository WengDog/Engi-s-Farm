#ifndef _MEATPRODUCER_HPP
#define _MEATPRODUCER_HPP

#include <iostream>
#include "Animal.h"
using namespace std;

class MeatProducer: virtual public Animal{
    public:
    MeatProducer();
    
    protected:
    int meat; 
};

#endif