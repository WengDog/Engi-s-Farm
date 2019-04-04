#include "Duck.h"

//ctor default
Duck::Duck() {
    isHorseAlive = true;
    timeHungryDuck = 17;
}

void Duck::printSound() {
    cout << "KWEK KWEK" << endl;
}

bool Duck::isHungry() {
    return(time % timeHungryDuck == 0);
}

char Duck::render() {
    return('D');
}
