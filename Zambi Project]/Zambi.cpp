#include <windows.h>
#include <iostream>
using namespace std;


struct Samurai
{
	int health;
	int ki;
	int attack;
	bool alive;
	
};

struct Zombie
{
	int health;
	int hunger;
	int attack;
	bool alive;
};


int fight(Zombie &z, Samurai &s)
{
	cout << "The zombie is attacking the samurai... \n";
	s.health -= z.attack;
	cout << "\n";
	cout << "The samurai's health is now " << s.health;
	z.hunger -= 10;
	cout << "\n";
	cout << "After attacking, the zombie's hunger is now " << z.hunger;
	cout << "\n";
	s.ki -= 6;
	cout << "After being attacked, the samurai's lost some ki... \n";
	cout << "The samurai's ki is now " << s.ki;
	cout << "\n";
	return 1;
}

int fight(Samurai &s, Zombie &z)
{
	cout << "The samurai is attacking the zombie... \n";
	z.health -= s.attack;
	cout << "\n";
	cout << "The zombie's health is now " << z.health;
	cout << "\n";
	s.ki -= 16;
	cout << "After attacking the zombie, the samurai's ki is now " << s.ki;
	cout << "\n";
	z.hunger += 8;
	cout << "After being attacked, the zombie's hunger increased... \n";
	cout << "The zombie's hunger is now " << z.hunger;
	cout << "\n";
	return 2;
}
int main()
{

	Samurai samsung = { 100,60,60,true };

	Zombie apple = { 100,80,40,true };
	char input = '0';


	while (input != 'q')
	{

		cout << "Enter 's' to simulate the zombie attacking the samurai. \n";
		cout << "Enter 'z' to simulate the samurai attacking the zombie. \n";
		cout << "Enter 'q' to exit this program. \n";
		cout << "\n";
		cout << "Enter your choice "; cin >> input;

		
		switch (input)
		{
		case 'z':
		{
		
			fight(apple, samsung);
		}


		case 's':
		{
			fight(samsung, apple);
		}

		

		

		}

		if (samsung.ki <= 0)
		{
			cout << "The samurai has no more ki to attack... \n";
			samsung.health -= 100;
			cout << "Game Over... \n";

		}

		if (samsung.health <= 0)
		{
			samsung.alive = false;
			cout << "The samurai has been eaten by the zombie... \n";
			cout << "Game Over.... \n";


		}

		if (apple.health <= 0)
		{
			apple.alive = false;
			cout << "Congratulations, Player has slain the zombie... \n";
			cout << "Game Over... \n";

		}

		if (samsung.alive == false)
		{
			cout << "\a";

		}

		if (apple.alive == false)
		{
			cout << "\a";
		}

	}


	

	system("pause");
	return 0;
}