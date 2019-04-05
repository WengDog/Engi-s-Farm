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

        //print current status player
        games.printAtribute();
        cout << '\n';
        
        //print inventory player
        games.printInventory();
        cout << '\n';

        //get Command Game
        cout << "Input \"HELP\" for see the commands\n";
        cout << "Enter command:\n";
        getline(cin, command);
        cout << '\n';

        if (command == "INTERACT") {
            sec++;
            games.INTERACT();
        } else if (command == "KILL") {
            sec++;
            games.KILL();
        } else if (command == "GROW") {
            sec++;
            games.GROW();
        } else if (command == "MIX") {
            sec++;
            games.MIX();
        } else if (command == "EXIT") {
            break;
        } else if (command == "TALK") {
            sec++;
            games.TALK();
        } else if (command == "MOVE UP") {
            sec++;
            games.MOVEUP();
        } else if (command == "MOVE DOWN") {
            sec++;
            games.MOVEDOWN();
        } else if (command == "MOVE RIGHT") {
            sec++;
            games.MOVERIGHT();
        } else if (command == "MOVE LEFT") {
            sec++;
            games.MOVELEFT();
        } else if (command == "HELP") {
            games.printHelp();
        }

        if (sec % 5 == 0)
            games.randomMoveAnimal();

        games.AnimalCondition();
    }
    return 0;
}
