#include "Horse.h"

//ctor default
Horse::Horse() {
    isHorseAlive = true;
    timeHungryHorse = 15;
}

void Horse::printSound() {
    cout << "HIIIHAAAAA" << endl;
}

bool Horse::isHungry() {
    return(time % timeHungryHorse == 0);
}

char Horse::render() {
    return('H');
}
