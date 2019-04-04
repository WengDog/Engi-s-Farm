#include <iostream>
#include <string>

#include "Game.h"

using namespace std;

string playerName;
string command;

int main(){
    // cout << "Masukan nama player\n";
    // cin >> playerName;
    Game games;
    games.inputMap();
    games.printGame();
    while (1){
        //print current status games
        games.printGame();

        cout << '\n';

        //get Command Game
        cout << "Enter command: ";
        getline(cin, command);
        if (command == "INTERACT") {

        }else if (command == "KILL"){

        }else if (command == "GROW"){

        }else if (command == "MIX"){

        }else if (command == "EXIT"){
            // break;
        }else if (command == "MOVE UP"){

        }else if (command == "MOVE DOWN"){

        }else if (command == "MOVE RIGHT"){

        }else if (command == "MOVE LEFT"){
            
        }
    }    
    return 0;
}