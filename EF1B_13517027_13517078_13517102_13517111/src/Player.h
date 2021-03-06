/* Kelas Player */
#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <iostream>
#include <string>
#include "Renderable.h"
#include "MatrixOfFacility.h"
#include "MatrixOfLand.h"
#include "MatrixOfAnimal.h"
#include "LinkedList.h"
#include "Duckegg.h"
#include "CowMeat.h"
#include "GoatMeat.h"
#include "RabbitMeat.h"
#include "Carbonara.h"
#include "GoldenMeatDespacito.h"
#include "PieSusu.h"
#include "Burger.h"
#include "HorseMilk.h"
#include "CowMilk.h"
#include "DuckMeat.h"
#include "ChickenEgg.h"

using namespace std;



#define SIRAM 1
#define DEFWATER 100
#define FILL_WATER_CONTAINER 10
#define MAX_WATER_CONTAINER 20

class Player : public Renderable{
    private:
        string name;
        int waterContainer;
        double money;
        LinkedList<Product> Inventory;


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
        void Interact(MatrixOfAnimal, MatrixOfFacility);

        //method untuk menyembelih hewan penghasil daging
        void Kill(MatrixOfAnimal&, MatrixOfLand&);

        //method untuk menyiram land dengan wadah air yang dimiliki
        void Grow(MatrixOfLand&);

        //method untuk mengisi water container yang ada pada well
        void FillWaterContainer();

        //method untuk menjual seluruh inventory
        void SellAllProduct();

        //method untuk membuat side product yang ada di mixer facility
        void Mix(MatrixOfFacility);

        //method untuk mencetak seluruh isi inventory
        void Print_Inventory();

        //method untuk mencetak atribut player
        void Print_Atribute();
};

#endif