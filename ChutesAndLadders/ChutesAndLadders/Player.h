#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{

public:
	string name;
	int isHuman;
	int turnNumber;
	int boardPosition;

	Player(int _playerNumber);
	void PrintStats();

private:
	int age;
	int playerNumber;
	string playerType;
	int difficulty;

	void SetName();
	void SetAge();
	void SetType();
	void Difficulty();
};

