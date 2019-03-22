/* Kelas Player */
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <iostream>
#include <string>
#include "Renderable.h"

using namespace std;

class Player : public Renderable{
    private:
        string name;
        int waterContainer;
        double money;

    public:
        //default ctor
        Player();

        //user defined ctor
        Player(string,int,double);

        //setter
        //setter untuk mengubah nama player
        void setname(string);
        //setter untuk mengubah uang player
        void setmoney(double);
        //setter untuk mengubah kapasitas container air
        void setwaterContainer(int);

        //getter
        //getter untuk mendapatkan nama
        string getname();
        //getter untuk mendapatkan uang
        double getmoney();
        //getter untuk mendapatkan kapasitas air
        int getwaterContainer();

        //method
        //method untuk memindahkan posisi pemain
        void moveUp(); //gerak 1 petak ke atas
        void moveDown(); //gerak 1 petak ke bawah
        void moveLeft(); //gerak 1 petak ke kiri
        void moveRight(); //gerak 1 petak ke kanan   
        
        //implementasi render di kelas player
        char render();

        //method untuk berbicara dengan hewan
        void Talk();

        //method untuk berinteraksi dengan FarmAnimal atau Facility di samping player
        void Interact();

        //method untuk menyembelih hewan penghasil daging
        void Kill();

        //method untuk menyiram land dengan wadah air yang dimiliki
        void Grow();

        //method untuk membuat side product yang ada di mixer facility
        void Mix();

};

#endif