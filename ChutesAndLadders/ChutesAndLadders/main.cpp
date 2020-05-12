#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "Player.h"
#include "Setup.h"
#include "main.h"

using namespace std;

int main()
{
    srand(time(NULL));

    Welcome();
    Rules();

    vector<Player> playerList = SetNumberPlayers();

    for (int i = 0; i < playerList.size(); i++)
    {
        playerList[i].turnNumber = i + 1;
        playerList[i].PrintStats();
    }

    cout << endl;

    GameEngine(playerList);
}
