#include "Setup.h"

void Welcome()
{
	cout << "Welcome to Chutes and Ladders!" << endl;
}

void Rules()
{
	cout << "Here are the rules: " << endl;
	cout << "1. You will start the game by defining the number of players and setting their names, ages, and player types" << endl;
	cout << "2. Once players are created, their stats will be displayed" << endl;
	cout << "3. To be continued" << endl;
	cout << endl;
}

vector<Player> SetNumberPlayers()
{
	int numPlayers;
	vector<Player> playerList;

	cout << "Please enter the number of players you would like (Max of 4): ";
	cin >> numPlayers;

	//Must check for letters as well (later issue)
	while (numPlayers > 4 || numPlayers <= 1)
	{
		cout << "You have entered an invalid number of players. Please try again: ";
		cin >> numPlayers;
	}

	for (int i = 0; i < numPlayers; i++)
	{
		playerList.push_back(Player(i + 1));
	}

	return playerList;
}

int DiceRoll()
{
	int rollTotal;

	rollTotal = (rand() % 6 + 1) + (rand() % 6 + 1);

	return rollTotal;
}

void readyTurn(vector<Player> playerList)
{
	int rollChoice;

	for (int i = 0; i < playerList.size(); i++)
	{
		if (playerList[i].isHuman == 1)
		{
			cout << playerList[i].name << ", Would you like to roll or quit? (press 1 to roll and 0 to quit): ";
			cin >> rollChoice;
			
			//Check for letters later
			while (rollChoice != 0 && rollChoice != 1)
			{
				cout << "That is an invalid choice. Please try again (press 1 to roll and 0 to quit): ";
				cin >> rollChoice;
			}

			if (rollChoice == 0)
			{
				exit(0);
			}

			if (rollChoice == 1)
			{
				playerList[i].boardPosition += DiceRoll();
				cout << playerList[i].name << "'s new position is: " << playerList[i].boardPosition << endl;
			}
		}
	}
}

void GameEngine(vector<Player> playerList)
{
	for (int i = 0; i < playerList.size(); i++)
	{
		while (playerList[i].boardPosition <= 100)
		{
			readyTurn(playerList);
		}
	}
}
