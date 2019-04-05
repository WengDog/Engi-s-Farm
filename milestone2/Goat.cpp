#include "Goat.h"

//ctor default
Goat::Goat() : Animal(23) {
    isGoatAlive = true;
}

void Goat::printSound() {
    cout << "SKIDIPAPAP" << endl;
}

char Goat::render() {
    return('G');
}

int Goat::getEndurance(){
    return endurance;
}

int Goat::getEndurance_Default(){
    return endurance_default;
}

void Goat::setEndurance(int x){
    endurance = x;
}
