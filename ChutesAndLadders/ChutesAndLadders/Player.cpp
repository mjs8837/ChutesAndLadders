#include "Player.h"

Player::Player(int _playerNumber)
{
	playerNumber = _playerNumber;
	boardPosition = 0;
	SetName();
	SetAge();
	SetType();
}

void Player::SetName()
{
	cout << "Please enter player " << playerNumber << "'s name: ";
	cin >> name;
}

void Player::SetAge()
{
	cout << "Please enter " << name << "'s age: ";
	cin >> age;
}

void Player::SetType()
{
	cout << "Please enter " << name << "'s player type (choices are 0 for AI or 1 for Human): ";
	cin >> isHuman;
	
	//Check for letters here (later problem)
	while (isHuman != 0 && isHuman != 1)
	{
		cout << "That is an invalid player type. Please try again (choices are 0 for AI or 1 for HUMAN): ";
		cin >> isHuman;
	}

	if (isHuman == 0)
	{
		playerType = "AI";
	}

	else
	{
		playerType = "Human";
	}

	cout << endl;
}

void Player::Difficulty()
{
	if (age > 13 || isHuman == 0)
	{
		difficulty = 1;
	}

	else
	{
		difficulty = 0;
	}
}

void Player::PrintStats()
{
	cout << "Name: " << name << "  Age: " << age << "  Player Type: " << playerType << "  Player Number: " << playerNumber <<  "  Turn Number: " << turnNumber << endl;
}
