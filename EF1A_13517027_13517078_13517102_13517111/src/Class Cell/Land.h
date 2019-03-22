#ifndef LAND_H
#define LAND_H

#include "Cell.h"

class Land : public Cell {
protected:
    char TypeOfLand;  // Tipe land Coop -> C, Barn -> B, GrassLand -> G
    bool OccupiedStatus;  // Status apakah land sudah ditempati animal
    bool GrassStatus;  // Status apakah land sudah ditumbuhi rumput
public:
    Land(); // CTOR tanpa parameter
    Land(int _x,int _y,char _LandType, bool _OccStatus, bool _GrassStatus); // CTOR dengan parameter
    // Getter dan setter
    char GetTypeOfLand(int posX,int posY);
    void SetTypeOfLand(int posX,int posY,char LandType);
    bool GetOccupiedStatus(int posX,int posY);
    void SetOccupiedStatus(int posX,int posY,bool OccStatus);
    bool GetGrassStatus(int posX,int posY);
    void SetGrassSatus(int posX,int posY, bool GrStatus);
};

#endif