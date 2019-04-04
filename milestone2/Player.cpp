#include "Player.h"

using namespace std;

//default constructor
Player::Player(){
    this->name = "player";
    this->waterContainer = 0;
    this->money = 100;
}

//user defined constructor
Player::Player(string name, int waterContainer, double money){
    this->name = name;
    this->waterContainer = waterContainer;
    this->money = money;
}

void Player::setname(string newname){
    this->name = newname;
}

void Player::setmoney(double newmoney){
    this->money = newmoney;
}

void Player::setwaterContainer(int newwaterContainer){
    this->waterContainer = newwaterContainer;
}

string Player::getname(){
    return this->name;
}

double Player::getmoney(){
    return this->money;
}

int Player::getwaterContainer(){
    return this->waterContainer;
}

void Player::moveUp(MatrixOfLand L){
    int next_x= getposx() - 1;
    int next_y = getposy();
    if (next_x >= 0 && next_x < L.GetBarMax()){
        if (next_y >= 0 && next_y < L.GetKolMax()){
            if (!L.GetLand(next_x, next_y).GetOccupiedStatus()){
                setposx(next_x);
                setposy(next_y);
            }
        }
    }
}

void Player::moveDown(MatrixOfLand L){
    int next_x= getposx() + 1;
    int next_y = getposy();
    if (next_x >= 0 && next_x < L.GetBarMax()){
        if (next_y >= 0 && next_y < L.GetKolMax()){
            if (!L.GetLand(next_x, next_y).GetOccupiedStatus()){
                setposx(next_x);
                setposy(next_y);
            }
        }
    }
}

void Player::moveLeft(MatrixOfLand L){
    int next_x= getposx();
    int next_y = getposy() - 1;
    if (next_x >= 0 && next_x < L.GetBarMax()){
        if (next_y >= 0 && next_y < L.GetKolMax()){
            if (!L.GetLand(next_x, next_y).GetOccupiedStatus()){
                setposx(next_x);
                setposy(next_y);
            }
        }
    }
}

void Player::moveRight(MatrixOfLand L){
    int next_x= getposx();
    int next_y = getposy() + 1;
    if (next_x >= 0 && next_x < L.GetBarMax()){
        if (next_y >= 0 && next_y < L.GetKolMax()){
            if (!L.GetLand(next_x, next_y).GetOccupiedStatus()){
                setposx(next_x);
                setposy(next_y);
            }
        }
    }
}

char Player::render(){
    return 'P';
}

void Player::Talk(){

}

void Player::Interact(){

}

void Player::Kill(){

}

void Player::Grow(MatrixOfLand& ){

}

void Player::Mix(){

}