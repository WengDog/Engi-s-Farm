#ifndef LIST_OF_LAND_H
#define LIST_OF_LAND_H

#include "Land.h"

class ListOfLand {
protected:
    Land * LandList; // Array yang menyimpan land pada map
public:
    ListOfLand(); // CTOR tanpa parameter
    ListOfLand(int n); // CTOR dengan parameter n sebagai jumlah maksimal land
    ListOfLand(const ListOfLand& L); // CCTOR
    ~ListOfLand(); // DTOR
    ListOfLand operator= (const ListOfLand& L); // Operator assignment
    // Getter
    Land GetLand(int x,int y);
};

#endif