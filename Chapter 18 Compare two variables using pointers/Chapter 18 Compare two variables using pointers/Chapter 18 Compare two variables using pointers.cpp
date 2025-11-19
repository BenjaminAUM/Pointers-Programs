// Chapter 18 Compare two variables using pointer
#include <iostream>
using namespace std;

int main()
{
	int number_1, number_2;
	number_1 = 50;
	number_2 = 20;

	int* pointer_1;
	int* pointer_2;
	pointer_1 = &number_1;
	pointer_2 = &number_2;

	if (*pointer_1 > *pointer_2)
	{
		cout << "Pointer 1 is greater" << endl;
	}
	else
	{
		cout << "Pointer 2 is greater" << endl;
	}
	return 0;

}