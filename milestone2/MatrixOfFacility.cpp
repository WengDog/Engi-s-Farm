// MatrixOfFacility.cpp

#include "MatrixOfFacility.h"

MatrixOfFacility::MatrixOfFacility(){
    FacilityMatrix = new Facility*[10];
    for(int i = 0;i<10;i++) {
        FacilityMatrix[i] = new Facility[10];
    }
    BarMax = 10;
    KolMax = 10;
}
MatrixOfFacility::MatrixOfFacility(int x,int y){
    FacilityMatrix = new Facility*[x];
    for(int i = 0; i < x; i++) {
        FacilityMatrix[i] = new Facility[y];
    }
    BarMax = x;
    KolMax = y;
}
MatrixOfFacility::MatrixOfFacility(const MatrixOfFacility& L){
    BarMax = L.GetBarMax();
    KolMax = L.GetKolMax();
    FacilityMatrix = new Facility*[BarMax];
    for(int i = 0;i<BarMax;i++) {
        FacilityMatrix[i] = new Facility[KolMax];
    }
    for (int i = 0;i<GetBarMax();i++) {
        for (int j = 0; j<GetKolMax();j++) {
            FacilityMatrix[i][j] = L.GetFacility(i,j);
        }
    }
}
MatrixOfFacility::~MatrixOfFacility(){
    for(int i = 0;i<GetBarMax();i++){
		delete[] FacilityMatrix[i];
	}
	delete[] FacilityMatrix;
}

MatrixOfFacility& MatrixOfFacility::operator= (const MatrixOfFacility& L){
    for (int i = 0; i < GetBarMax(); i++)
        delete[] FacilityMatrix[i];
    delete[] FacilityMatrix;

    BarMax = L.BarMax;
    KolMax = L.KolMax;
    FacilityMatrix = new Facility*[BarMax];
    for (int i = 0; i < BarMax; i++)
        FacilityMatrix[i] = new Facility[KolMax];
    
    for (int i = 0;i<GetBarMax();i++) {
        for (int j = 0; j<GetKolMax();j++) {
            FacilityMatrix[i][j] = L.GetFacility(i,j);
        }
    }
    return *this;
}

Facility MatrixOfFacility::GetFacility(int x, int y) const{
    return(FacilityMatrix[x][y]);
}

int MatrixOfFacility::GetBarMax() const{
    return(BarMax);
}
int MatrixOfFacility::GetKolMax() const {
    return(KolMax);
}

void MatrixOfFacility::setFacility(int x,int y, Facility tmp){
    FacilityMatrix[x][y] = tmp;
}

void MatrixOfFacility::inputFacility(){
    for (int i = 0; i < BarMax; i++)
        for (int j = 0; j < KolMax; j++){
            char tmp;
            cin >> tmp;
            Facility f(i, j, tmp);
            setFacility(i, j, f);
        }
}

void MatrixOfFacility::printFacilitity(){
    for (int i = 0; i < BarMax; i++){
        for (int j = 0; j < KolMax; j++){
            cout << FacilityMatrix[i][j].GetTypeOfFacility() << " ";
        }
        cout << '\n';
    }
}