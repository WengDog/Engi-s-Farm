#include "Duck.h"

//ctor default
Duck::Duck():Animal(17){
    isDuckAlive = true;
}

void Duck::printSound() {
    cout << "KWEK KWEK" << endl;
}

char Duck::render() {
    return('D');
}

int Duck::getEndurance(){
    return endurance;
}

int Duck::getEndurance_Default(){
    return endurance_default;
}

void Duck::setEndurance(int x){
    endurance = x;
}

