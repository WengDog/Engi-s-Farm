#include "Rabbit.h"

//ctor default
Rabbit::Rabbit() :Animal(12){
    isRabbitAlive = true;
}

void Rabbit::printSound() {
    cout << "CIRICITCIT" << endl;
}

char Rabbit::render() {
    return('R');
}

int Rabbit::getEndurance(){
    return endurance;
}

int Rabbit::getEndurance_Default(){
    return endurance_default;
}

void Rabbit::setEndurance(int x){
    endurance = x;
}
