#include <iostream>
#include <string>

#include "Game.h"
using namespace std;

string playerName;
string command;
int sec;

int main(){
    // cout << "Masukan nama player\n";
    // cin >> playerName;
    Game games;
    games.inputMap();
    while (1){
        //print current status games
        games.printGame();
        cout << '\n';
        games.printInventory();

        cout << '\n';

        //get Command Game
        cout << "Enter command:\n";
        getline(cin, command);
        sec++;
        cout << '\n';

        if (command == "INTERACT") {

        } else if (command == "KILL") {
            games.KILL();
        } else if (command == "GROW") {
            games.GROW();    
        } else if (command == "MIX") {

        } else if (command == "EXIT") {
            break;
        } else if (command == "TALK") {
            games.TALK();
        } else if (command == "MOVE UP") {
            games.MOVEUP();
        } else if (command == "MOVE DOWN") {
            games.MOVEDOWN();
        } else if (command == "MOVE RIGHT") {
            games.MOVERIGHT();
        } else if (command == "MOVE LEFT") { 
            games.MOVELEFT();
        } 

        if (sec % 5 == 0)
            games.randomMoveAnimal();
        
        games.AnimalCondition();
    }    
    return 0;
}