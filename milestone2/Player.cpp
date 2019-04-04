#include "Player.h"

using namespace std;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

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

void Player::moveUp(MatrixOfLand L, MatrixOfFacility F){
    int next_x= getposx() - 1;
    int next_y = getposy();
    if (next_x >= 0 && next_x < L.GetBarMax()){
        if (next_y >= 0 && next_y < L.GetKolMax()){
            if (!L.GetLand(next_x, next_y).GetOccupiedStatus() &&
                F.GetFacility(next_x, next_y).GetTypeOfFacility() == '.'){
                setposx(next_x);
                setposy(next_y);
            }
        }
    }
}

void Player::moveDown(MatrixOfLand L, MatrixOfFacility F){
    int next_x= getposx() + 1;
    int next_y = getposy();
    if (next_x >= 0 && next_x < L.GetBarMax()){
        if (next_y >= 0 && next_y < L.GetKolMax()){
            if (!L.GetLand(next_x, next_y).GetOccupiedStatus() &&
                F.GetFacility(next_x, next_y).GetTypeOfFacility() == '.'){
                setposx(next_x);
                setposy(next_y);
            }
        }
    }
}

void Player::moveLeft(MatrixOfLand L, MatrixOfFacility F){
    int next_x= getposx();
    int next_y = getposy() - 1;
   if (next_x >= 0 && next_x < L.GetBarMax()){
        if (next_y >= 0 && next_y < L.GetKolMax()){
            if (!L.GetLand(next_x, next_y).GetOccupiedStatus() &&
                F.GetFacility(next_x, next_y).GetTypeOfFacility() == '.'){
                setposx(next_x);
                setposy(next_y);
            }
        }
    }
}

void Player::moveRight(MatrixOfLand L, MatrixOfFacility F){
    int next_x= getposx();
    int next_y = getposy() + 1;
   if (next_x >= 0 && next_x < L.GetBarMax()){
        if (next_y >= 0 && next_y < L.GetKolMax()){
            if (!L.GetLand(next_x, next_y).GetOccupiedStatus() &&
                F.GetFacility(next_x, next_y).GetTypeOfFacility() == '.'){
                setposx(next_x);
                setposy(next_y);
            }
        }
    }
}

char Player::render(){
    return 'P';
}

void Player::Talk(MatrixOfAnimal a){
    for (int i = 0; i < 4; i++){
        int nx = getposx() + dx[i];
        int ny = getposy() + dy[i];
        if (nx >= 0 && nx < a.GetBarMax() &&
            ny >= 0 && ny < a.GetKolMax()){
                
            }
    }
}

void Player::Interact(){

}

void Player::Kill(){

}

void Player::Grow(MatrixOfLand& L){
    int px = getposx();
    int py = getposy();
    Land pLand = L.GetLand(px, py);
    if (!pLand.GetGrassStatus()){
        if (waterContainer >= SIRAM){
            waterContainer -= SIRAM;
            L.GetLand(px, py).SetGrassStatus(true);  
            if (pLand.GetTypeOfLand() == '0'){
                L.GetLand(px, py).SetTypeOfLand('*');
            }else if (pLand.GetTypeOfLand() == '-'){
                L.GetLand(px, py).SetTypeOfLand('#');
            }else if (pLand.GetTypeOfLand() == 'x'){
                L.GetLand(px, py).SetTypeOfLand('@');
            }
        }
    }
}

void Player::Mix(){

}