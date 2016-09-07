#pragma once
#include <windows.h>
#include <iostream>
using namespace std;



class Zombie
{

public:
	Zombie() {};
	Zombie(int health, int attack)
	{
		int HP = health; int atK = attack;
	}

private:
	int health;
	int attack;
	int occupation[255];


};