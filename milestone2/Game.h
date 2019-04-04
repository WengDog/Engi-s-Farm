#ifndef GAME_H
#define GAME_H

#include "Player.h"


#include <fstream>
#include <iomanip>

#include "Animal.h"
#include "Chicken.h"
#include "Cow.h"
#include "CowMeat.h"
#include "CowMilk.h"
#include "Duck.h"
#include "DuckEgg.h"
#include "DuckMeat.h"
#include "EggProducer.h"
#include "Carbonara.h"
#include "Burger.h"
#include "FarmProduct.h"
#include "Goat.h"
#include "GoatMeat.h"
#include "GoldenMeatDespacito.h"
#include "Horse.h"
#include "HorseMilk.h"
#include "LinkedList.h"
#include "MeatProducer.h"
#include "MilkProducer.h"
#include "PieSusu.h"
#include "Product.h"
#include "Rabbit.h"
#include "RabbitMeat.h"
#include "SideProduct.h"
#include "MatrixOfFacility.h"
#include "MatrixOfLand.h"
#include "Land.h"
#include "Facility.h"
#include "Cell.h"

class Game{
    protected:
        Player player;
        MatrixOfLand map_land;
        MatrixOfFacility map_facility;
        int rowMap;
        int colMap;

    public:
        //default constructor
        Game();
        //user defined constructor
        Game(string);
        
        //method interact
        void INTERACT();

        //method kill
        void KILL();

        //method grow
        void GROW();

        //method mix
        void MIX();
        
        //print status game
        void printGame();

        //input Game Map
        void inputMap(string);

        //method moveup
        void MOVEUP();

        //method movedown
        void MOVEDOWN();

        //method meve left
        void MOVELEFT();

        //method move right
        void MOVERIGHT();
};

#endif
