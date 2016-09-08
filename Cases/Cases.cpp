#include <windows.h>
#include <iostream>
#include "Cases.h"
using namespace std;





/*
1. Create a class representing a zombie. Each zombie should have a health and attack value,
and a previous occupation. Ensure that the zombie’s variables are private and there are
functions to access and modify the zombies’ data.
*/





int main()
{
					// Health,Attack,Occupation
	Zombie One = Zombie(140, 150, "Body Builder");
	Zombie Two = Zombie(180, 100, "Magician");
	Zombie Three = Zombie(260, 60, "Competetive Eater");
	Zombie Four = Zombie(80, 200, "Martial Artist");

	
	zombieFightone(One,Two);
	
	cout << "\n \n";
	
	
	
	cout << "Test \n";
	
	
	
	system("pause");





}



