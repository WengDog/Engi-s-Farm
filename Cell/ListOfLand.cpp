// ListOfLand.cpp

#include "ListOfLand.h"

ListOfLand::ListOfLand() {
    LandList = new Land [10];
    nMax = 10;
}
ListOfLand::ListOfLand(int n) {
    LandList = new Land[n];
    nMax = n;
}
ListOfLand::ListOfLand(const ListOfLand& L) {
    nMax = L.GetNMax();
    LandList = new Land[nMax];
    for(int i = 0;i<GetNMax();i++) {
        LandList[i] = L.GetLand(i);
    }
}
ListOfLand::~ListOfLand() {
    delete[]LandList;
}
ListOfLand ListOfLand::operator= (const ListOfLand& L) {
    ListOfLand L1(L);
    return L1;
}
Land ListOfLand::GetLand(int x,int y) const {
    Land L1(-1,-1,'N',false,false);  // Type Land yg tidak sah
    for(int i = 0;i<GetNMax();i++) {
        if((GetLand(i).getposx() == x) && (GetLand(i).getposy() == y)) {
            return(GetLand(i));
        }
    }
    return(L1);
}
Land ListOfLand::GetLand(int i) const {
    return(LandList[i]);
}
int ListOfLand::GetNMax() const {
    return(nMax);
}