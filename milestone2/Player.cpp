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

void Player::moveUp(){
    
}

void Player::moveDown(){

}

void Player::moveLeft(){

}

void Player::moveRight(){

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

void Player::Grow(){

}

void Player::Mix(){

}