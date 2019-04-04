#include "Cow.h"

//ctor default
Cow::Cow() {
    isCowAlive = true;
    timeHungryCow = 20;
}

void Cow::printSound() {
    cout << "MOOMOOGHI" << endl;
}

bool Cow::isHungry() {
    return(time % timeHungryCow == 0);
}

char Cow::render() {
    return('O');
}
