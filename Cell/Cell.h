// Tubes OOP Cell.h
#ifndef CELL_H
#define CELL_H

#include "Renderable.h"

class Cell {
public:
    Cell();  // CTOR tanpa parameter
    Cell(int,int);  // CTOR dengan parameter
    // Getter dan setter dari value
    void setX(int);
    void setY(int);
};

#endif
