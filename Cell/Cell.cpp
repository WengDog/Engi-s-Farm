// Cell.cpp
// Implementasi Cell.h

#include "Cell.h"
#include <iostream>

Cell::Cell() {
    posx = 0;
    posy = 0;
}

Cell::Cell(int x,int y) {
    posx = x;
    posy = y;
}

void Cell::setX(int x) {
    posx = x;
}

void Cell::setY(int y) {
    posy = y;
}