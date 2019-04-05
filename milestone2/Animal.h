#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

#include <iostream>
#include "Renderable.h"
#define DEFAULT_ENDURANCE 5

//Basis kelas abstrak
class Animal : public Renderable{
    public:
    //CTOR Default
    Animal();
    //CTOR User Defined
    Animal(int);

    //pure virtual
    virtual void printSound()=0; //print suara hewan jika diajak berinteraksi
    virtual int getEndurance()=0;
    virtual int getEndurance_Default()=0;
    virtual void setEndurance(int)=0;

    //implementasi render
    char render();


    protected:
    int endurance;
    int endurance_default;
    bool meat, milk, egg;
};

#endif