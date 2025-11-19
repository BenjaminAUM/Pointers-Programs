// Chapter 18 Change value practice
#include <iostream>
using namespace std;

int main()
{
	int number = 50;
	int* pointer_1;
	pointer_1 = &number;

	*pointer_1 = 100;

	cout << "New value of number: " << number << endl;
	return 0;
}