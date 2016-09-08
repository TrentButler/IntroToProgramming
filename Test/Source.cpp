#include <Windows.h>
#include <iostream>
using namespace std;


class Student
{
public:
	Student (string n, int a)
	{
		Name = n; age = a;
	}
	
	

private:
	string Name;
	int age;
	

};




bool Swap(Student&a, Student&b)
{
 
	

	Student temp = a;
	a = b;
	b = temp;

	return true;
}


int main()
{
	
	Student Apple("Apple", 13);
	Student Pear("Pear", 40);
	
	
	Student studentArray[2] = { Apple, Pear};
	
	
	
	
	Swap(studentArray[0], studentArray[1]);

	cout << Swap;
	system("pause");
	return 0;
}