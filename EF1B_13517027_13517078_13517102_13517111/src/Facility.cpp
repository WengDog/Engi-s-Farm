// Facility.cpp

#include "Facility.h"

Facility::Facility():Cell() {
    TypeOfFacility = '.';
}

Facility::Facility(int _x,int _y, char _FacilityType):Cell(_x,_y) {
    TypeOfFacility = _FacilityType;
}

char Facility::GetTypeOfFacility() const{
    return(TypeOfFacility);
}
void Facility::SetTypeOfFacility(char _FacilityType) {
    TypeOfFacility = _FacilityType;
}

char Facility::render(){
    return 'T';
}