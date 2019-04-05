#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

#include <iostream>
#include "Renderable.h"
#define DEFAULT_ENDURANCE 5

/**
 * Kelas Animal, merupakan abstract base class.
 * Digunakan untuk mengidentifikasi objek hewan-hewan.
 */
class Animal : public Renderable{
    public:
    /**
     * Konstruktor default Animal.
     */
    Animal();
    /**
     * Konstruktor berparameter Animal yang menerima sebuah integer
     * untuk menentukan waktu kelaparan tiap hewan.
     */
    Animal(int);

    /**
     * method pure virtual untuk menampilkan suara hewan
     * untuk menentukan waktu kelaparan tiap hewan.
     */
    virtual void printSound()=0;
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
