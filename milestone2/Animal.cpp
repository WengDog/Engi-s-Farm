#include "Animal.h"

Animal::Animal(){
    //
}

Animal::Animal(int x){
    endurance_default  = x;
    endurance = x;
}

void Animal::moveDown(){

}

void Animal::moveLeft(){

}

void Animal::moveRight(){

}

void Animal::moveUp(){

}

char Animal::render(){
    return 'A';
}

