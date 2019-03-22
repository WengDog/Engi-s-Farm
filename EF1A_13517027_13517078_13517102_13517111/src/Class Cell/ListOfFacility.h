#ifndef LIST_OF_FACILITY_H
#define LIST_OF_FACILITY_H

#include "Facility.h"

class ListOfFacility {
protected:
    Facility * FacilityList; // Array yang menyimpan facility pada map
public:
    ListOfFacility(); // CTOR tanpa parameter
    ListOfFacility(int n); // CTOR dengan parameter n sebagai jumlah maksimal facility
    ListOfFacility(const ListOfFacility& L); // CCTOR
    ~ListOfFacility(); // DTOR
    ListOfFacility operator= (const ListOfFacility& L); // Operator assignment
    // Getter
    Facility GetFacility(int x,int y);
};

#endif