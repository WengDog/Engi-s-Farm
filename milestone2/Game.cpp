#include "Game.h"
#include <iostream>

using namespace std;

Game::Game(){
    //set player in game
    player.setname("player");
    player.setmoney(100);
    player.setwaterContainer(10);

}

Game::Game(string playername){
    //set player in game
    player.setname(playername);
    player.setmoney(100);
    player.setwaterContainer(10);



}

void Game::INTERACT(){
    
}

