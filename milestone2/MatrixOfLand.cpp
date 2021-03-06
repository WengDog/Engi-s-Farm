// ListOfLand.cpp

#include "MatrixOfLand.h"

MatrixOfLand::MatrixOfLand() {
    LandMatrix = new Land*[15];
    for(int i = 0;i<15;i++) {
        LandMatrix[i] = new Land[15];
    }
    BarMax = 15;
    KolMax = 15;
}
MatrixOfLand::MatrixOfLand(int x, int y) {
    LandMatrix = new Land*[x];
    for(int i = 0;i<x;i++) {
        LandMatrix[i] = new Land[y];
    }
    BarMax = x;
    KolMax = y;
}
MatrixOfLand::MatrixOfLand(const MatrixOfLand& L) {
    BarMax = L.GetBarMax();
    KolMax = L.GetKolMax();
    LandMatrix = new Land*[BarMax];
    for(int i = 0;i<BarMax;i++) {
        LandMatrix[i] = new Land[KolMax];
    }
    for (int i = 0;i<GetBarMax();i++) {
        for (int j = 0; j<GetKolMax();j++) {
            LandMatrix[i][j] = L.GetLand(i,j);
        }
    }
}
MatrixOfLand::~MatrixOfLand() {
    for(int i = 0;i<GetBarMax();i++){
		delete[] LandMatrix[i];
	}
	delete[] LandMatrix;
}
MatrixOfLand& MatrixOfLand::operator= (const MatrixOfLand& L) {
   for (int i = 0; i < GetBarMax(); i++)
        delete[] LandMatrix[i];
    delete[] LandMatrix;

    BarMax = L.BarMax;
    KolMax = L.KolMax;
    LandMatrix = new Land*[BarMax];
    for (int i = 0; i < BarMax; i++)
        LandMatrix[i] = new Land[KolMax];
    
    for (int i = 0;i<GetBarMax();i++) {
        for (int j = 0; j<GetKolMax();j++) {
            LandMatrix[i][j] = L.GetLand(i,j);
        }
    }
    return *this;
}

Land MatrixOfLand::GetLand(int x, int y) const {
    return(LandMatrix[x][y]);
}
int MatrixOfLand::GetBarMax() const {
    return(BarMax);
}
int MatrixOfLand::GetKolMax() const {
    return(KolMax); 
}

void MatrixOfLand::setLand(int x,int y,Land tmp){
    LandMatrix[x][y] = tmp;
}