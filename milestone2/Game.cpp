#include "Game.h"
#include <iostream>


using namespace std;

Game::Game(){
    //set player in game
    player.setname("player");
    player.setmoney(100);
    player.setwaterContainer(10);
    
    //set map size
    rowMap = 15;
    colMap = 15;

    //inisialisasi map
    MatrixOfLand temp_map(15, 15);
    map_land = temp_map;

    //inisialisasi fasilitas
    MatrixOfFacility temp_Facility(15, 15);
    map_facility = temp_Facility;

    //inisialisasi matriks animal
    MatrixOfAnimal temp_animal(15,15);
    map_animal = temp_animal;
}

Game::Game(string playername){
    //set player in game
    player.setname(playername);
    player.setmoney(100);
    player.setwaterContainer(10);

    
    //set map size
    rowMap = 15;
    colMap = 15;

    //inisialisasi map
    MatrixOfLand temp_map(15, 15);
    map_land = temp_map;

    //inisialisasi fasilitas
    MatrixOfFacility temp_Facility(15, 15);
    map_facility = temp_Facility;
}

void Game::INTERACT(){
    
}

void Game::KILL(){

}

void Game::GROW(){

}

void Game::MIX(){

}

void Game::TALK(){
    player.Talk()
}

void Game::MOVEUP(){
    player.moveUp(map_land, map_facility);
}

void Game::MOVEDOWN(){
    player.moveDown(map_land, map_facility);
}

void Game::MOVELEFT(){
    player.moveLeft(map_land, map_facility);
}

void Game::MOVERIGHT(){
    player.moveRight(map_land, map_facility);
}

void Game::printGame(){
    for (int i = 0; i < rowMap; i++){
        for (int j = 0; j < colMap; j++){
            if (i == player.getposx() && j == player.getposy())
                cout << 'P';
            else {
                if (map_animal.GetAnimalMatrix()[i][j] != nullptr){
                    cout << map_animal.GetAnimalMatrix()[i][j]->render();
                }else {
                    if (map_facility.GetFacility(i, j).GetTypeOfFacility() != '.'){
                        cout << map_facility.GetFacility(i,j).GetTypeOfFacility();                        
                    }else {
                        cout << map_land.GetLand(i,j).GetTypeOfLand();
                    }
                }
            }
            cout << " ";
        }
        cout << '\n';
    }
}

void Game::inputLand(){
    ifstream file;
    file.open("Land.txt");
    for (int i = 0; i < rowMap; i++){
        for (int j = 0; j < colMap; j++){
            char inp;
            bool isgrass = false;
            file >> inp;
            if (inp == '*' || inp == '#' 
            || inp == '@') isgrass = true;

            if (inp == 'T' || inp == 'W' || inp == 'M') {
                Facility f(i, j, inp);
                map_facility.setFacility(i, j, f);
            }else {
                Land tanah(i, j, inp, false, isgrass);
                map_land.setLand(i, j, tanah);
            }
        }
    }
    file.close();
}

void Game::inputAnimalMap(){
    ifstream file;
    file.open("AnimalMap.txt");
    for (int i = 0; i < rowMap; i++){
        for (int j = 0; j < colMap; j++){
            char inp;
            file >> inp;
            if (inp == 'C'){
                map_animal.GetAnimalMatrix()[i][j] = new Chicken();
            }else if (inp == 'D'){
                map_animal.GetAnimalMatrix()[i][j] = new Duck();
            }else if (inp == 'R'){
                map_animal.GetAnimalMatrix()[i][j] = new Rabbit();
            }else if (inp == 'G'){
                map_animal.GetAnimalMatrix()[i][j] = new Goat();
            }else if (inp == 'P'){
                player.setposx(i);
                player.setposy(j);
            }else if (inp == 'H'){
                map_animal.GetAnimalMatrix()[i][j] = new Horse();
            }else if (inp == 'O'){
                map_animal.GetAnimalMatrix()[i][j] = new Cow(); 
            }
        }
    }
    file.close();
}

void Game::inputMap(){
    inputLand();
    inputAnimalMap();
}
