/* Kelas Player */
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <iostream>
#include <string>
#include "Renderable.h"
#include "MatrixOfFacility.h"
#include "MatrixOfLand.h"
#include "MatrixOfAnimal.h"

using namespace std;

#define SIRAM 5
#define DEFWATER 100

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

        //operator = 
        Player& operator=(Player &p);

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
        void moveUp(MatrixOfLand, MatrixOfFacility); //gerak 1 petak ke atas
        void moveDown(MatrixOfLand, MatrixOfFacility); //gerak 1 petak ke bawah
        void moveLeft(MatrixOfLand, MatrixOfFacility); //gerak 1 petak ke kiri
        void moveRight(MatrixOfLand, MatrixOfFacility); //gerak 1 petak ke kanan   
        
        //implementasi render di kelas player
        char render();

        //method untuk berbicara dengan hewan
        void Talk(MatrixOfAnimal);

        //method untuk berinteraksi dengan FarmAnimal atau Facility di samping player
        void Interact();

        //method untuk menyembelih hewan penghasil daging
        void Kill();

        //method untuk menyiram land dengan wadah air yang dimiliki
        void Grow(MatrixOfLand&);

        //method untuk membuat side product yang ada di mixer facility
        void Mix();

};

#endif