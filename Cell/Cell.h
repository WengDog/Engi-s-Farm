// Tubes OOP Cell.h
#ifndef CELL_H
#define CELL_H

#include "Renderable.h"

class Cell: public Renderable{  
public:
    Cell():Renderable(0,0);  // CTOR tanpa parameter
    Cell(int x,int y):Renderable(x,y);  // CTOR dengan parameter
    // Getter dan setter dari value
    void setX(int);
    void setY(int);
};

#endif
