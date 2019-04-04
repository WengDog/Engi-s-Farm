#include "Renderable.h"

using namespace std;

/*default constructor*/
Renderable::Renderable(){
    posx = 0;
    posy = 0;
}

/*implementasi fungsi getposx */
int Renderable::getposx(){
    return posx;
}

/*implementasi fungsi getposy */
int Renderable::getposy(){
    return posy;
}

void Renderable::setposx(int x){
    posx = x;
}

void Renderable::setposy(int y){
    posy = y;
}