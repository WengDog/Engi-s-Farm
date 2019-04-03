// ListOfFacility.cpp

#include "ListOfFacility.h"

ListOfFacility::ListOfFacility(){
    FacilityList = new Facility [5];
    nMax = 5;
}
ListOfFacility::ListOfFacility(int n){
    FacilityList = new Facility [n];
    nMax = n;
}
ListOfFacility::ListOfFacility(const ListOfFacility& L){
    nMax = L.GetNMax();
    FacilityList = new Facility [nMax];
    for(int i = 0;i<GetNMax();i++) {
        FacilityList[i] = L.GetFacility(i);
    }
}
ListOfFacility::~ListOfFacility(){
    delete[] FacilityList;
}
ListOfFacility ListOfFacility::operator= (const ListOfFacility& L){
    ListOfFacility L1(L);
    return L1;
}
Facility ListOfFacility::GetFacility(int x,int y){
    Facility F1(-1,-1,'N');     // Type Facility yg tidak sah
    for(int i = 0;i<GetNMax();i++) {
        if((GetFacility(i).getposx() == x) && (GetFacility(i).getposy() == y)) {
            return(GetFacility(i));
        }
    }
    return(F1);
}
Facility ListOfFacility::GetFacility(int i) const{
    return(FacilityList[i]);
}
int ListOfFacility::GetNMax() const{
    return(nMax);
}