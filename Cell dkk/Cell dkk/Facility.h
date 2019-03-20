#ifndef FACILITY_H
#define FACILITY_H

#include "Cell.h"

class Facility : public Cell {
protected:
    char TypeOfFacility;  // Tipe Facility yaitu Truck -> T, Mixer -> M, Well -> W
public:
    Facility():Cell(); // CTOR tanpa parameter
    Facility(int _x,int _y, char _FacilityType):Cell(_x,_y); // CTOR dengan parameter
    // Getter dan setter
    char GetTypeOfFacility();
    void SetTypeOfFacility(char _FacilityType);
};

#endif