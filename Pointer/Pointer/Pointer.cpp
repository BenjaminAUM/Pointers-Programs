// Pointer
#include <iostream>
using namespace std;

int main()
{
	int number;
	number = 5;

	int* pointer_1;
	pointer_1 = &number;

	cout << "Number:   " << number << endl;
	cout << "&Number:  " << &number << endl;

	cout << "pointer_1: " << pointer_1 << endl;
	cout << "*pointer_1: " << *pointer_1 << endl;
	cout << "&pointer_1: " << &pointer_1 << endl;
	return 0;
}