#include "Animal.h"

Animal::Animal(){
    //
}

Animal::Animal(int x){
    endurance_default  = x;
    endurance = x;
}

char Animal::render(){
    return 'A';
}

