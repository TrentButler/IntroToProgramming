#pragma once
#include <windows.h>
#include <iostream>
using namespace std;


struct Fruit
{
	int amount;
	bool empty;
	
};



void Fruitgame(Fruit&(a), Fruit&(p))
{
	int gameChoice;
	
	cout << "Fruit throw simulator \n \n";
	cout << "0.) Throw an apple... \\n";
	cout << "1.) Throw a pear... \n";

	cout << "\n \n";

	cout << "Select a fruit... "; cin >> gameChoice;
	system("cls");
	

	if (gameChoice == 0)
	{
		a.amount -= 1;
		cout << "User throws 1 Apple... \n";
		cout << "There are " << a.amount << " apples left... \n";

	}

	if (gameChoice == 1)
	{
		p.amount -= 1;
		cout << "User throws 1 Pear... \n";
		cout << "There are " << p.amount << " pears left... \n";

	}

	if (a.amount == 0)
	{
		cout << "User has ran out of apples... \n";
		system("pause");
		a.empty = true;
	}

	if (p.amount == 0)
	{
		cout << "User has ran out of pears... \n";
		system("pause");
		p.empty = true;
	}
}

