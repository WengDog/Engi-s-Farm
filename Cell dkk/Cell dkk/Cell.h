// Tubes OOP Cell.h
#ifndef CELL_H
#define CELL_H

class Cell {
protected:  // Posisi dari cell dalam bentuk (x,y)
    int x;
    int y;
public:
    Cell();  // CTOR tanpa parameter
    Cell(int,int);  // CTOR dengan parameter
    // Getter dan setter dari value
    void setX(int);
    void setY(int);
    int getX();
    int getY();
};

#endif