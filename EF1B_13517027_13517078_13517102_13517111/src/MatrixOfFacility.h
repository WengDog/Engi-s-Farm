#ifndef LIST_OF_FACILITY_H
#define LIST_OF_FACILITY_H

#include "Facility.h"

class MatrixOfFacility {
protected:
    Facility ** FacilityMatrix;// Matrix yang menyimpan facility pada map
    int BarMax; 
    int KolMax;
public:
    MatrixOfFacility(); // CTOR tanpa parameter
    MatrixOfFacility(int,int); // CTOR dengan parameter n sebagai jumlah maksimal facility
    MatrixOfFacility(const MatrixOfFacility& L); // CCTOR
    ~MatrixOfFacility(); // DTOR
    MatrixOfFacility& operator= (const MatrixOfFacility& L); // Operator assignment
    // Getter

    Facility GetFacility(int x,int y) const;
    int GetBarMax() const;
    int GetKolMax() const;

    //setter
    void setFacility(int,int,Facility);

    void inputFacility();

    void printFacilitity();
};

#endif