#include "Game.h"
#include <iostream>


using namespace std;

Game::Game(){
    //set player in game
    player.setname("player");
    player.setmoney(100);
    player.setwaterContainer(10);
    
    //set map size
    rowMap = 5;
    colMap = 5;

    //inisialisasi map
    MatrixOfLand temp_map(5, 5);
    map_land = temp_map;

    //inisialisasi fasilitas
    MatrixOfFacility temp_Facility(5, 5);
    map_facility = temp_Facility;
}

Game::Game(string playername){
    //set player in game
    player.setname(playername);
    player.setmoney(100);
    player.setwaterContainer(10);

    
    //set map size
    rowMap = 5;
    colMap = 5;

    //inisialisasi map
    MatrixOfLand temp_map(5, 5);
    map_land = temp_map;

    //inisialisasi fasilitas
    MatrixOfFacility temp_Facility(5, 5);
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

void Game::MOVEUP(){
    player.moveUp(map_land);
}

void Game::MOVEDOWN(){
    player.moveDown(map_land);
}

void Game::MOVELEFT(){
    player.moveLeft(map_land);
}

void Game::MOVERIGHT(){
    player.moveRight(map_land);
}

void Game::printGame(){
    // cout << rowMap << " " << colMap << '\n';
    // cout << player.getposx() << " " << player.getposy() << '\n';
    for (int i = 0; i < rowMap; i++){
        for (int j = 0; j < colMap; j++){
            if (i == player.getposx() && j == player.getposy()){
                cout << 'P';
            }
            else {
                char f = map_facility.GetFacility(i, j).GetTypeOfFacility();
                char l = map_land.GetLand(i, j).GetTypeOfLand();
                if (f == '.')
                    cout << l;
                else cout << f;
            }
        }
        cout << '\n';
    }
}

void Game::inputMap(string s){
    // for (int i = 0; i < rowMap; i++){
    //     for (int j = 0; j < colMap; j++){
    //         char c;
    //         cin >> c;
    //         if (c == 'W' || c == 'M' || c == 'T'){
    //             //facility
    //             Facility now(i, j, c);
    //             map_facility.setFacility(i, j, now);

    //             //land
    //             Land tanah(i, j, '.', false, false);
    //             map_land.setLand(i,j,tanah);

    //         }else if (c == 'P'){
    //             //player
    //             player.setposx(i); player.setposy(j);

    //             //facility
    //             Facility now(i, j, '.');
    //             map_facility.setFacility(i, j, now);

    //             //land
    //             Land tanah(i, j, '.', false, false);
    //             map_land.setLand(i,j,tanah);
    //         }else if (c == 'C' || c == 'G' || c == 'B'){
    //             //kategori land
    //             //C = Coop G = Grassland B = Barn
    //             Land tanah(i, j, c, false, false);
    //             map_land.setLand(i,j,tanah);

    //             //facility
    //             Facility now(i, j, '.');
    //             map_facility.setFacility(i, j, now);
    //         }
    //         else if (c == '*' || c == '@' || c == '#'){
    //             //land
    //             Land tanah(i, j, c, false, true);
    //             map_land.setLand(i,j,tanah);

    //             //facility
    //             Facility now(i, j, '.');
    //             map_facility.setFacility(i, j, now);
    //         }
    //     }
    // }
    ifstream file;
    file.open(s);
    for (int i = 0; i < rowMap; i++){
        for (int j = 0; j < rowMap; j++){
            char inp;
            file >> inp;
        }
    }
    file.close();
}
