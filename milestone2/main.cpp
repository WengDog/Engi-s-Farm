#include <iostream>
#include <string>

#include "Game.h"

using namespace std;

string playerName;
string command;

int main(){
    cout << "Masukan nama player\n";
    cin >> playerName;
    Game games(playerName);
    while (1){
        //print current status games
        games.printGame();

        cout << '\n';

        //get Command Game
        cout << "Enter command: ";
        cin >> command;
        if (command == "INTERACT") {

        }else if (command == "KILL"){

        }else if (command == "GROW"){

        }else if (command == "MIX"){

        }else if (command == "EXIT"){
            // break;
        }
    }    
    return 0;
}