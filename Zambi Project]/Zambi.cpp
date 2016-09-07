#include <windows.h>
#include <iostream>
#include <stdlib.h>
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
	z.hunger -= 6;
	cout << "\n";
	cout << "After attacking, the zombie's hunger is now " << z.hunger;
	cout << "\n";
	s.ki -= 6;
	cout << "After being attacked, the samurai lost some ki... \n";
	cout << "The samurai's ki is now " << s.ki;
	cout << "\n \n";
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
	cout << "\n \n";
	return 2;
}

int charStatus(Zombie z, Samurai s)
{
	cout << "\n \n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << "\n";
	cout << "||The samurai's current status is:   || \n";
	cout << "||Health: " << s.health << "                        || \n";
	cout << "||Ki: " << s.ki << "                             || \n";
	cout << "||Attack: " << s.attack << "                         || \n";
	cout << "\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << "\n \n";


	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << "\n";
	cout << "||The zombie's current status is:    || \n";
	cout << "||Health: " << z.health << "                        || \n";
	cout << "||Hunger: " << z.hunger << "                         || \n";
	cout << "||Attack: " << z.attack << "                         || \n";
	cout << "\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << "\n \n";



	return 1;
}

int main()
{

	Samurai samsung = { 200,60,40,true };

	Zombie apple = { 400,80,36,true };
	
	char input = '0';
	
	while (input != 'q')
	{

		cout << "Enter 's' to simulate the samurai attacking the zombie. \n";
		cout << "Enter 'z' to simulate the zombie attacking the samurai. \n";
		cout << "Enter 'e' to view current character status. \n";
		cout << "Enter 'q' to exit this program. \n";
		cout << "\n";
		
		cout << "Enter your choice "; cin >> input;
		system("cls");
		
		switch (input)
		{
		case 'z':
		{
		
			fight(apple, samsung);
			break;

		}


		case 's':
		{
			fight(samsung, apple);
			break;

		}

		case 'e':
		{
			charStatus(apple, samsung);
			break;
	
		}

		
		}

		if (samsung.health == 80 || input == 'j')
		{
			int superCounter = 0;
			samsung.attack += 400;
			samsung.health += 80;
			samsung.ki += 200;
			cout << "\n \n";
			
			cout << "\n \n";
			
			system("cls");
			cout << "The samurai uses his critical ability... \n";
			system("pause");

			for (int i = 0; i < 7; i++)
			{
				cout << endl;
				cout << "\a";
			}

			for (int a = 0; a <= 340; a++)
			{
				
				cout << "||||-`|||||-`|||||-`|||||-`|||||-`|||";
				cout << " ~ ~ ATTACK ++ ~ ~ ";
				cout << "||||-`|||||-`|||||-`|||||-`|||||-`|||";
				cout << " ~ ~ ATTACK ++ ~ ~ ";
			}
			cout << "\n \n";
			cout << "The samurai's ki has reached " << samsung.ki << " his attack will now be increased to " << samsung.attack;
			cout << "\n \n";
			superCounter++;
			if (superCounter > 1)
			{
				break;
			}

		}
						
		if (samsung.ki <= 0)
		{
			cout << "\n \n";
			cout << "The samurai has no more ki to attack... \n";
			samsung.health -= 100;
			cout << "The samurai will take damage due to not having any ki to defend himself... \n";
			cout << "The samurai's health is now " << samsung.health;
			cout << "\n \n";
			

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

		if (samsung.health == 120)
		{
			samsung.ki += 64;
			samsung.health += 64;
			cout << "\n \n";
			cout << "The samurai's health has fallen to " << samsung.health << ".";
			cout << "\n";
			cout << "The samurai uses a restore potion... \n";
			cout << "This potion restores 64 health and 64 ki... \n";
			cout << "The samurai's health is now " << samsung.health;
			cout << "\n";
			cout << "The samurai's ki is now " << samsung.ki;
			cout << "\n \n";
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
			cout << "\n \n";
			cout << "Congratulations, Player has slain the zombie... \n";
			cout << "Game Over... \n";
			cout << "\n \n";

		}

		if (apple.health == 180)
		{
			cout << "\n \n";
			cout << "Since the zombie's health has reached " << apple.health;
			cout << "\n";
			apple.hunger += 100;
			cout << "His hunger will now be increased to " << apple.hunger;
			cout << "\n \n";
		}

		if (apple.hunger == 76)
		{
			apple.attack += 50;
			cout << "\n \n";
			cout << "The zombie's hunger has reached " << apple.hunger << " his attack will now be increased to " << apple.attack;
			cout << "\n \n";

		}
		
		if (apple.hunger == 112)
		{
			cout << "\n \n";
			cout << "The zombie's hunger is now " << apple.hunger;
			apple.attack += 200;
			cout << "\n";
			cout << "The zombie's attack is now raised to " << apple.attack;
			cout << "\n \n";

		}

		if (apple.hunger == 20)
		{
			cout << "\n \n";
			cout << "The zombie's hunger is now " << apple.hunger;
			cout << "\n \n";
			apple.attack += 60;
			cout << "The zombie's hunger is extremely low";
			cout << "\n";
			cout << "The zombies attack is now increasing to " << apple.attack;
			cout << "\n \n";
			
			
		}

		if (samsung.alive == false||input == 'u')
		{
			for (int a = 0; a < 340; a++)
			{
				
				cout << "\\\\\\\\\\     \\\\\\\\\\\\\\\    \\\\\\\\\\";
				cout << "!!!!!!"<<"  The samurai is now DEAD  "<<"!!!!!!";
				cout << "/////////     ////////////////    /////////";
				
			}
		}

		if (apple.alive == false||input == 'y')
		{
			for (int a = 0; a < 340; a++)
			{
				
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
				cout << "!!!!!!" << "Congraulations You Win" << "!!!!!!";
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
				
			}
		}

		

	}

	return 0;
}