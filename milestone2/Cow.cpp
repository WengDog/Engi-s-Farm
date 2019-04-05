#include "Cow.h"

//ctor default
Cow::Cow():Animal(20) {
    isCowAlive = true;
}

void Cow::printSound() {
    cout << "MOOMOOGHI" << endl;
}

char Cow::render() {
    return('O');
}

int Cow::getEndurance(){
    return endurance;
}

int Cow::getEndurance_Default(){
    return endurance_default;
}

void Cow::setEndurance(int x){
    endurance = x;
}

bool Cow::getIsProductable(){
    return isProductable;
}

void Cow::setIsProductable(bool condition){
    isProductable = condition;
}