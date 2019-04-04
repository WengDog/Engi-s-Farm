#include "Goat.h"

//ctor default
Goat::Goat() {
    isGoatAlive = true;
    timeHungryGoat = 23;
}

void Goat::printSound() {
    cout << "SKIDIPAPAP" << endl;
}

bool Goat::isHungry() {
    return(time % timeHungryGoat == 0);
}

char Goat::render() {
    return('G');
}
