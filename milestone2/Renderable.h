/* Kelas renderable adalah kelas abstrak membantu menampilkan objek*/

#ifndef RENDERABLE_H
#define RENDERABLE_H

#include <iostream>

using namespace std;

class Renderable{
    protected:
        //atribut posisi dari setiap objek yang ada pada program
        //posx = posisi absis
        //posy = posisi ordinat
        int posx, posy;
        
        //waktu pada games
        int time;

    public:
        //method untuk mengembalikan karakter yang merepresentasikan objek
        virtual char render() = 0;

        //method untuk mendapatkan absis object
        int getposx();
        //method untuk mendapatkan ordinat object
        int getposy();
};

#endif