// Chapter 18 Check Even Or Odd Using Pointer
#include <iostream>
using namespace std;

int main()
{
	int number = 4;
	int* pointer;
	pointer = &number;

	if (*pointer % 2 == 0)
	{
		cout << "Even" << endl;
	}
	else
	{
		cout << "Odd" << endl;
	}
	return 0;
}