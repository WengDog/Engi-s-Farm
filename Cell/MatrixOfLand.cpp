// ListOfLand.cpp

#include "MatrixOfLand.h"

MatrixOfLand::MatrixOfLand() {
    LandMatrix = new Land*[10];
    for(int i = 0;i<10;i++) {
        LandMatrix[i] = new Land[10];
    }
    BarMax = 10;
    KolMax = 10;
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
    LandMatrix = new Land*[x];
    for(int i = 0;i<x;i++) {
        LandMatrix[i] = new Land[y];
    }
    for (i = 0;i<GetBarMax();i++) {
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
MatrixOfLand MatrixOfLand::operator= (const MatrixOfLand& L) {
    MatrixOfLand L1(L);
    return L1;
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