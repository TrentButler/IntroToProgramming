#include <windows.h>
#include <iostream>
#include "Reference Header.h"
using namespace std;



int main()
{
	bool run = true;
	Fruit apple = {20, false};
	Fruit pear = {20, false};

	while (run = true)
	{
		
		
		Fruitgame(apple, pear);
		
		if (apple.empty == true)
		{
			break;
		}

		if (pear.empty == true)
		{
			break;
		}
		

		
	}


	


}