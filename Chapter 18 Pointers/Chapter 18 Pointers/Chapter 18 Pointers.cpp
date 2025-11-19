// Chapter 18 Pointers
#include <iostream>
using namespace std;

int main()
{
	int number;
	number = 25;
	int* first_pointer;
	first_pointer = &number;

	cout << "Value of number: " << number << endl;
	cout << "Address of number (&number): " << &number << endl;
	cout << "Pointer first_pointer stores: " << first_pointer << endl;
	cout << "Value at address (*first_pointer): " << *first_pointer << endl;
	return 0;
}