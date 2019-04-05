#include "Game.h"
#include <iostream>


using namespace std;


//variabel 
int drx[] = {-1, 0, 0, 1};
int dry[] = {0, -1, 1, 0};

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
    player.Interact(map_animal, map_facility);
}

void Game::KILL(){
    player.Kill(map_animal, map_land);
}

void Game::GROW(){
    player.Grow(map_land);
}

void Game::MIX(){

}

void Game::TALK(){
    player.Talk(map_animal);
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
    cout << "-------- Current Games --------\n";
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
    cout << "-------------------------------\n";
}

void Game::printInventory(){
    player.Print_Inventory();
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
                Land current = map_land.GetLand(i, j);
                Land newland(i, j, current.GetTypeOfLand(), true, current.GetGrassStatus());
                map_land.setLand(i, j, newland);
                map_animal.GetAnimalMatrix()[i][j] = new Chicken();
            }else if (inp == 'D'){
                Land current = map_land.GetLand(i, j);
                Land newland(i, j, current.GetTypeOfLand(), true, current.GetGrassStatus());
                map_land.setLand(i, j, newland);
                map_animal.GetAnimalMatrix()[i][j] = new Duck();
            }else if (inp == 'R'){
                Land current = map_land.GetLand(i, j);
                Land newland(i, j, current.GetTypeOfLand(), true, current.GetGrassStatus());
                map_land.setLand(i, j, newland);
                map_animal.GetAnimalMatrix()[i][j] = new Rabbit();
            }else if (inp == 'G'){
                Land current = map_land.GetLand(i, j);
                Land newland(i, j, current.GetTypeOfLand(), true, current.GetGrassStatus());
                map_land.setLand(i, j, newland);
                map_animal.GetAnimalMatrix()[i][j] = new Goat();
            }else if (inp == 'P'){
                player.setposx(i);
                player.setposy(j);
            }else if (inp == 'H'){
                Land current = map_land.GetLand(i, j);
                Land newland(i, j, current.GetTypeOfLand(), true, current.GetGrassStatus());
                map_land.setLand(i, j, newland);
                map_animal.GetAnimalMatrix()[i][j] = new Horse();
            }else if (inp == 'O'){
                Land current = map_land.GetLand(i, j);
                Land newland(i, j, current.GetTypeOfLand(), true, current.GetGrassStatus());
                map_land.setLand(i, j, newland);
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

void Game::randomMoveAnimal() {
    int nx, ny;
    for(int i = 0; i < rowMap; i++) {
        for(int j = 0; j < colMap; j++) {
            if (map_animal.GetAnimalMatrix()[i][j] != nullptr){
                int random = rand()%4;
                nx = i + drx[random];
                random = rand()%4;
                ny = j + dry[random];
                if (nx >= 0 && nx < rowMap && ny >= 0 && ny < colMap){
                    if (map_animal.GetAnimalMatrix()[nx][ny] == nullptr){
                        if (map_facility.GetFacility(nx,ny).GetTypeOfFacility() == '.' && (nx!=player.getposx() || ny!=player.getposy())){
                            map_animal.GetAnimalMatrix()[nx][ny] = map_animal.GetAnimalMatrix()[i][j];
                            map_animal.GetAnimalMatrix()[i][j] = nullptr;

                            Land now = map_land.GetLand(i,j);
                            Land newLand(i, j, now.GetTypeOfLand(), false, now.GetGrassStatus());
                            map_land.setLand(i, j, newLand);

                            now = map_land.GetLand(i, j);
                            Land adjLand(nx, ny, now.GetTypeOfLand(), true, now.GetGrassStatus());
                            map_land.setLand(nx, ny, adjLand);
                        }
                    }
                }
            }
        }
    }
}

void Game::AnimalCondition(){
    for (int i = 0; i < rowMap; i++){
        for (int j = 0; j < colMap; j++){
            if (map_animal.GetAnimalMatrix()[i][j] != nullptr){
                Land now = map_land.GetLand(i,j);
                if (map_animal.GetAnimalMatrix()[i][j]->getEndurance() == -4){
                    //MATI!
                    map_animal.GetAnimalMatrix()[i][j]=nullptr;
                    Land newland(i, j, now.GetTypeOfLand(), false, now.GetGrassStatus());
                    map_land.setLand(i, j, newland);
                }
                else if (map_animal.GetAnimalMatrix()[i][j]->getEndurance() <= 0){
                    //dalam kondisi lapar!
                    if (now.GetGrassStatus()){
                        char newtypeland;
                        if (now.GetTypeOfLand() == '*')
                            newtypeland = '0';
                        else if (now.GetTypeOfLand() == '#')
                            newtypeland = '-';
                        else newtypeland = 'x';
                        Land newland(i, j, newtypeland, now.GetOccupiedStatus(), false);
                        map_land.setLand(i,j,newland);
                        int def = map_animal.GetAnimalMatrix()[i][j]->getEndurance_Default();
                        map_animal.GetAnimalMatrix()[i][j]->setEndurance(def);
                    }else {
                        int new_endurance = map_animal.GetAnimalMatrix()[i][j]->getEndurance();
                        map_animal.GetAnimalMatrix()[i][j]->setEndurance(new_endurance-1);
                    }
                }else{
                    int new_endurance = map_animal.GetAnimalMatrix()[i][j]->getEndurance();
                    map_animal.GetAnimalMatrix()[i][j]->setEndurance(new_endurance-1);
                }
            }
        }
    }
}

void Game::printHelp() {
    cout << "--------- Help Command --------\n";
    cout << "Command :\n";
    cout << "1. MOVE UP\n";
    cout << "2. MOVE DOWN\n";
    cout << "3. MOVE RIGHT\n";
    cout << "4. MOVE LEFT\n";
    cout << "5. INTERACT\n";
    cout << "6. KILL\n";
    cout << "7. TALK\n";
    cout << "8. MIX\n";
    cout << "9. GROW\n";
    cout << "10. EXIT\n";
    cout << "11. HELP\n";
    cout << "-------------------------------\n";
    cout << "MAP SYMBOL :\n";
    cout << "1. Land :\n";
    cout << "\"-\" = Grassland\n";
    cout << "\"#\" = Grass in Grassland\n";
    cout << "\"0\" = Coop\n";
    cout << "\"*\" = Grass in Coop\n";
    cout << "\"x\" = Barn\n";
    cout << "\"@\" = Grass in Barn\n";
    cout << "2. Facility :\n";
    cout << "\"T\" = Truck\n";
    cout << "\"W\" = Well\n";
    cout << "\"M\" = Mixer\n";
    cout << "3. Animal :\n";
    cout << "\"C\" = Chicken\n";
    cout << "\"D\" = Duck\n";
    cout << "\"G\" = Goat\n";
    cout << "\"R\" = Rabbit\n";
    cout << "\"H\" = Horse\n";
    cout << "\"O\" = Cow\n";
    cout << "-------------------------------\n";
}