#ifndef LIST_OF_LAND_H
#define LIST_OF_LAND_H

#include "Land.h"

class MatrixOfLand {
protected:
    Land ** LandMatrix; // Matrixyang menyimpan land pada map
    int BarMax;
    int KolMax; 
public:
    MatrixOfLand(); // CTOR tanpa parameter
    MatrixOfLand(int x,int y); // CTOR dengan parameter n sebagai jumlah maksimal land
    MatrixOfLand(const MatrixOfLand& L); // CCTOR
    ~MatrixOfLand(); // DTOR
    MatrixOfLand& operator= (const MatrixOfLand& L); // Operator assignment
    // Getter
    Land GetLand(int x,int y) const;
    int GetBarMax() const;
    int GetKolMax() const;

    //setter
    void setLand(int,int,Land);
};

#endif