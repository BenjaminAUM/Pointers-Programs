// Chapter 18 Swap two numbers
#include <iostream>
using namespace std;

int main()
{
	int number_1;
	int number_2;
	number_1 = 25;
	number_2 = 20;

	int* pointer_1;
	int* pointer_2;
	pointer_1 = &number_1;
	pointer_2 = &number_2;

	*pointer_1 = 5;
	*pointer_2 = 3;

	cout << "First number: " << number_1 << endl;
	cout << "Second number: " << number_2 << endl;
	return 0;
}