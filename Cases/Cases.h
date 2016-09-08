#pragma once
#include <windows.h>
#include <iostream>
using namespace std;



class Zombie
{

public:
	
	Zombie (int hp, int atk, string job)
	{
		health = hp; attack = atk; occupation = job;
	}

private:
	int health;
	int attack;
	string occupation;


};



/*
2. Using the zombie class, create a game in which a small number of zombies attack each other
until only one remains! This can be done using the console or the AIE framework.*/

int zombieFightone (Zombie&z, Zombie&s)
{
	

	s.hp -= z.atk;
	cout << "Zombie "<<z.job<<" takes " << z.atk << " damage... \n";
	return 1;


}