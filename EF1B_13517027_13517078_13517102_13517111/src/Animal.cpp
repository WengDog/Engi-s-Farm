#include "Animal.h"

Animal::Animal(){
    isProductable = false;
}

Animal::Animal(int x){
    endurance_default  = x;
    endurance = x;
    isProductable = false;
}

char Animal::render(){
    return 'A';
}

void Animal::setIsProductable(bool condition){
    isProductable = condition;
}

bool Animal::getIsProductable(){
    return isProductable;
}
