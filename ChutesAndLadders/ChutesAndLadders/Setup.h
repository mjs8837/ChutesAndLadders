#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include "Player.h"

using namespace std;

void Welcome();

void Rules();

vector<Player> SetNumberPlayers();

int DiceRoll();

void readyTurn(vector<Player> playerList);

void GameEngine(vector<Player> playerList);