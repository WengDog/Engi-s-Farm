#include "MatrixOfAnimal.h"

MatrixOfAnimal::MatrixOfAnimal(){
    AnimalMatrix = new Animal**[15];
    for (int i = 0; i < 15; i++){
        AnimalMatrix[i] = new Animal * [15];
        for (int j = 0; j < 15; j++)
            AnimalMatrix[i][j] = nullptr;
    }
    BarMax = 15;
    KolMax = 15;
}

MatrixOfAnimal::MatrixOfAnimal(int x,int y){
    AnimalMatrix = new Animal**[x];
    for (int i = 0; i < x; i++){
        AnimalMatrix[i] = new Animal *[y];
        for (int j = 0; j < y; j++)
            AnimalMatrix[i][j] = nullptr;
    }
    BarMax = x;
    KolMax = y;
}

MatrixOfAnimal::MatrixOfAnimal(const MatrixOfAnimal&A) {
    BarMax = A.BarMax;
    KolMax = A.KolMax;
    AnimalMatrix = new Animal**[BarMax];
    for (int i = 0; i < BarMax; i++){
        AnimalMatrix[i] = new Animal * [KolMax];
        for (int j = 0; j < KolMax; j++)
            AnimalMatrix[i][j] = A.AnimalMatrix[i][j];
    }
}

MatrixOfAnimal::~MatrixOfAnimal(){
    for (int i = 0; i < BarMax; i++){
        delete[] AnimalMatrix[i];
    }
    delete AnimalMatrix;
}

MatrixOfAnimal& MatrixOfAnimal::operator = (const MatrixOfAnimal& A){
    for (int i = 0; i < BarMax; i++)
        delete[] AnimalMatrix[i];
    delete AnimalMatrix;

    BarMax = A.BarMax;
    KolMax = A.KolMax;
    AnimalMatrix = new Animal**[BarMax];
    for (int i = 0; i < BarMax; i++){
        AnimalMatrix[i] = new Animal*[KolMax];
        for (int j = 0; j < KolMax; j++)
            AnimalMatrix[i][j] = A.AnimalMatrix[i][j];
    }    
    return *this;
}

Animal& MatrixOfAnimal::GetAnimal(int x,int y){
    return *(AnimalMatrix[x][y]);
}

int MatrixOfAnimal::GetBarMax() const{
    return BarMax;
}

int MatrixOfAnimal::GetKolMax() const{
    return KolMax;
}

Animal*** MatrixOfAnimal::GetAnimalMatrix(){
    return AnimalMatrix;
}