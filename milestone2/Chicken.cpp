#include "Chicken.h"

//ctor default
Chicken::Chicken() {
    isChickenAlive = true;
    timeHungryChicken = 10;
}

void Chicken::printSound() {
    cout << "BAROKOKOK" << endl;
}

bool Chicken::isHungry() {
    return(time % timeHungryChicken == 0);
}

char Chicken::render() {
    return('C');
}
