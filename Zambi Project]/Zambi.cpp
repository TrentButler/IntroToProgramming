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
	cout << "After being attacked, the samurai lost some ki... \n";
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

	Samurai samsung = { 200,60,40,true };

	Zombie apple = { 400,80,20,true };
	char input = '0';


	while (input != 'q')
	{

		cout << "Enter 's' to simulate the samurai attacking the zombie. \n";
		cout << "Enter 'z' to simulate the zombie attacking the samurai. \n";
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
		if (samsung.health <= 80)
		{
			samsung.attack += 400;
			samsung.health += 80;
			samsung.ki += 200;
			cout << "The samurai uses his 'final resort' ability... \n";
			cout << "\n";
			
			for (int i = 0; i < 18; i++)
			{
				cout << endl;
				cout << "\a";
			}

			for (int a = 0; a <= 20; a++)
			{
				
				cout << "||||||||||||||||||||||||||||||||||||||";
				cout << "~ ~ THE SAMURAI'S ATTACK IS BEING HIGHTENED ~ ~ \n";
				cout << "||||||||||||||||||||||||||||||||||||||";
				
			}
			cout << "\n \n";
			cout << "The samurai's ki has reached " << samsung.ki << " his attack will now be increased to " << samsung.attack;
			cout << "\n \n";
		}
		
		if (samsung.ki <= 0)
		{
			cout << "The samurai has no more ki to attack... \n";
			samsung.health -= 64;
			cout << "The samurai will take damage due to not having any ki to defend himself... \n";
			cout << "The samurai's health is now " << samsung.health;
			

		}

		if (samsung.ki < 20)
		{
			cout << "\n \n";
			cout << "The samurai's ki is getting low... \n";
			cout << "\n \n";
		}

		if (samsung.ki == 16)
		{
			cout << "\n \n";
			cout << "The samurai can only attack once more... \n";
			cout << "\n \n";
		}

		if (samsung.health <= 120)
		{
			samsung.ki += 22;
			samsung.health += 22;
			cout << "The samurai's health has fallen to " << samsung.health << ".";
			cout << "\n";
			cout << "The samurai uses a restore potion... \n";
			cout << "This potion restores 22 health and 22 ki... \n";
			cout << "The samurai's health is now " << samsung.health;
			cout << "\n";
			cout << "The samurai's ki is now " << samsung.ki;
			cout << "\n";
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

		if (apple.hunger > 76)
		{
			apple.attack += 50;
			cout << "The zombie's hunger has reached " << apple.hunger << " his attack will now be increased to " << apple.attack;
			cout << "\n \n";

		}

		if (samsung.alive == false)
		{
			for (int a = 0; a < 6; a++)
			{
				cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"";
				cout << "\a"<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<"Samurai is now DEAD"<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
				cout << "//////////////////////////////////////////////////////////////////////////////////////////////////";
				cout << "\n";
			}
		}

		if (apple.alive == false)
		{
			for (int a = 0; a < 6; a++)
			{
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
				cout << "\a" << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << "The zombie has been slain" << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
				cout << "\n";
			}
		}

	}


	

	system("pause");
	return 0;
}