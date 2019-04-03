/* Kelas renderable adalah kelas abstrak membantu menampilkan objek*/

#ifndef RENDERERABLE_H
#define RENDERERABLE_H

#include <iostream>

using namespace std;

class Renderable{
    protected:
        //atribut posisi dari setiap objek yang ada pada program
        //posx = posisi absis
        //posy = posisi ordinat
        int posx, posy;

    public:
        //method untuk mengembalikan karakter yang merepresentasikan objek
        virtual char render() = 0;

        //method untuk mendapatkan absis object
        virtual int getposx();
        //method untuk mendapatkan ordinat object
        virtual int getposy();
};

#endif