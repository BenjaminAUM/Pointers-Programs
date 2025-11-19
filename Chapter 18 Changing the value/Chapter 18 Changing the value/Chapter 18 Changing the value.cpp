// Chapter 18 Changing the value
#include <iostream>
using namespace std;

int main()
{
	int number;
	number = 25;
	int* first_pointer;
	first_pointer = &number;

	*first_pointer = 40;

	cout << "Number: " << number << endl;
	cout << "First_pointer: " << *first_pointer << endl;
	cout << "First_pointer (address): " << first_pointer << endl;

	return 0;
}