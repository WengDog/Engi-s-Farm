#ifndef MATRIX_OF_ANIMAL_H
#define MATRIX_OF_ANIMAL_H

#include "Animal.h"

class MatrixOfAnimal{
    protected:
        Animal ** AnimalMatrix;
        int BarMax;
        int KolMax;
    
    public:
        //CTOR Tanpa Parameter
        MatrixOfAnimal();
        //User defined CTOR
        MatrixOfAnimal(int x,int y);
        //CCTOR
        MatrixOfAnimal(const MatrixOfAnimal& L);
        //DTOR
        ~MatrixOfAnimal();

        //Operator Assignment
        MatrixOfAnimal& operator=(const MatrixOfAnimal&);    

        //Getter
        Animal GetAnimal(int x,int y) const;
        int GetBarMax() const;
        int GetKolMax() const;

        //settter
        void setAnimal(int,int,Animal);
};

#endif