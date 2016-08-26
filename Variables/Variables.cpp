#include <iostream>
using namespace std;
int main()

{
	
	//VARIABLES EXCERCISE
	printf("Variables Excercise 08-18-16 \n");
	printf("Trent Butler \n");
	system("pause");
	int a1 = 2 / 3 + 3 / 5;
	int b1 = 2 % 3 + 3 % 5;
	int c = 23 % 15 % -2;
	int d = 25 * 1 / 2;
	float e = 25 * 1.0 / 2;
	int f = 25 * (1 / 2);
	int g = 235 / 8 + 7;
	float h = 235 / 8.0 + 7;
	float i = ((20 + 1) / 2 - 2.0) / (23 + 3)*0.2;
	
	
	//EXCERCISE 1
	printf("1. Find the value of each onf the following expressions, or explain why it is not a valid expression. Try this without coding it first \n");
	//example a)
	printf("%i", a1);
	printf(" \n");
	//example b)
	printf("%i", b1);
	printf(" \n");
	//example c)
	printf("%i", c);
	printf(" \n");
	//example d)
	printf("%i", d);
	printf(" \n");
	//example e)
	printf("%i", e);
	printf(" \n");
	//example f)
	printf("%i", f);
	printf(" \n");
	//example g)
	printf("%i", g);
	printf(" \n");
	//example h)
	printf("%i", h);
	printf(" \n");
	//example i)
	printf("%i", i);
	printf(" \n");
	system("pause");
	
	
	//EXCERCISE 2
	printf("2. Select suitable variable names you might use for: \n");
	printf("a). avgHeight \n");
	printf("b). tax_rt>$65000 \n");
	printf("c). tax_rt<$5000 \n");
	printf("d). tot_cost_steamgame \n");
	system("pause");
	
	
	//EXCERCISE 3
	printf("3. Select suitable data types to hold the following values: \n");
	printf("a.) intenger \n");
	printf("b.) float \n");
	printf("c.) character \n");
	printf("d.) boolean \n");
	system("pause");
	
	
	//EXCERCISE 4
	printf("4. Create a program that swaps two numbers. \n");
	system("pause");
	int A = 22;
	int B = 66;
	printf("%i", A);
	printf(" \n");
	printf("%i", B);
	printf(" \n");
	system("pause");
	int tmp = A;
	A = B;
	B = tmp;
	printf("%i", A);
	printf(" \n");
	printf("%i", B);
	printf(" \n");
	system("pause");

	
	
	//EXCERCISE 5
	printf("5. Consider the following code segment. \n");
	printf("a) What will be the output when the input is: \n");
	system("pause");
	//A)

	printf("a) 1 A 45 \n");
	printf("i:1 \n");
	printf("ch: A \n");
	printf("f: 45 \n");
	system("pause");
	//B)
	printf("b) 1A45 \n");
	printf("i: 1 \n");
	printf("ch: A \n");
	printf("f:45 \n");
	//C)
	system("pause");
	printf("c) 1 9 45 \n");
	printf("i: 1 \n");
	printf("ch: 9 \n");
	printf("f: 45 \n");
	//D)
	system("pause");
	printf("d) 1 945 \n");
	printf("i: 1 \n");
	printf("ch: 9 \n");
	printf("f: 45 \n");
	//E
	system("pause");
	printf("e) B 45.6 \n");
	printf("i: 1 \n");
	printf("ch: A \n");
	printf("f: 0 \n");
	//F
	system("pause");
	printf("f) 1BC5.6 \n");
	printf("i: 1 \n");
	printf("ch:A \n");
	printf("f: 0 \n");
	system("pause");

	
	//EXCERCISE 6
	printf("6. Ask the user for 5 whole numbers. Output the average of these numbers. \n");
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int average;
	printf("Please enter 5 whole numbers \n");
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
	average = (num1 + num2 + num3 + num4 + num5) / 5;
	printf("%i", average, "\n");
	system("pause");
	
	
	
	//EXCERCISE 7
	std::cout << "This program will display the letter in the middle of two given letters. \n";
	std::cout << " \n";
	std::cout << "Please enter two letters. \n";
	std::cout << " \n";
	char lett1;
	char lett2;
	char display;
	std::cin >> lett1 >> lett2;
	display = ((int)lett1 + (int)lett2) / 2.0f;
	std::cout <<"The middle letter is: "<< display;
	cout << "\n";
	system("pause");
	
}
