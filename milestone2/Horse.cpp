#include "Horse.h"

//ctor default
Horse::Horse() :Animal(15){
    isHorseAlive = true;
}

void Horse::printSound() {
    cout << "HIIIHAAAAA" << endl;
}

char Horse::render() {
    return('H');
}

int Horse::getEndurance(){
    return endurance;
}

int Horse::getEndurance_Default(){
    return endurance_default;
}

void Horse::setEndurance(int x){
    endurance = x;
}