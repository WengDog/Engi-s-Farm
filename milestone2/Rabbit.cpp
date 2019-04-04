#include "Rabbit.h"

//ctor default
Rabbit::Rabbit() {
    isRabbitAlive = true;
    timeHungryRabbit = 12;
}

void Rabbit::printSound() {
    cout << "CIRICITCIT" << endl;
}

bool Rabbit::isHungry() {
    return(time % timeHungryRabbit == 0);
}

char Rabbit::render() {
    return('R');
}
