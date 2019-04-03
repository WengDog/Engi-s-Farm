//Land.cpp

#include "Land.h"

Land::Land():Cell() {
    TypeOfLand = 'C';
    OccupiedStatus = false;
    GrassStatus = false;
}
Land::Land(int _x,int _y,char _LandType, bool _OccStatus, bool _GrassStatus):Cell(_x,_y) {
    TypeOfLand = _LandType;
    OccupiedStatus = _OccStatus;
    GrassStatus = _GrassStatus;
}
char Land::GetTypeOfLand() const{
    return(TypeOfLand);
}
void Land::SetTypeOfLand(char LandType) {
    TypeOfLand = LandType;
}
bool Land::GetOccupiedStatus() const{
    return(OccupiedStatus);
}
void Land::SetOccupiedStatus(bool OccStatus) {
    OccupiedStatus = OccStatus;
}
bool Land::GetGrassStatus() const{
    return(GrassStatus);
}
void Land::SetGrassSatus(bool GrStatus) {
    GrassStatus = GrStatus;
}