#ifndef _MILKPRODUCER_HPP
#define _MILKPRODUCER_HPP

#include <iostream>
#include "Animal.h"
using namespace std;

class MilkProducer: virtual public Animal{
    public:
    MilkProducer();

    protected:
    int milk;
};

#endif