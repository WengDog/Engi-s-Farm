#include "Chicken.h"

//ctor default
Chicken::Chicken() : Animal(10) {
    isChickenAlive = true;
}

void Chicken::printSound() {
    cout << "BAROKOKOK" << endl;
}

char Chicken::render() {
    return('C');
}

void Chicken::setEndurance(int x){
    endurance = x;
}

int Chicken::getEndurance(){
    return endurance;
}

int Chicken::getEndurance_Default(){
    return endurance_default;
}
