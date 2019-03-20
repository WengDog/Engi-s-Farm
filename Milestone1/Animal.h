#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

#include <iostream>
#include "Rendarable.h"
using namespace std;

//Basis kelas abstrak
class Animal : public Renderable{
    public:
    void moveUp(); //gerak 1 petak ke atas
    void moveDown(); //gerak 1 petak ke bawah
    void moveLeft(); //gerak 1 petak ke kiri
    void moveRight(); //gerak 1 petak ke kanan

    virtual void printSound()=0; //print suara hewan jika diajak berinteraksi
    virtual bool isHungry()=0; //true jika lapar, false jika tidak. Implementasi bergantung jenis hewan

    protected:
    bool meat, milk, egg;
};

#endif