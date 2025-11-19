// Chapter 18 Address Display
#include <iostream>
using namespace std;

int main()
{
	int number_1 = 5, number_2 = 9;
	int* pointer_1 = &number_1;
	int* pointer_2 = &number_2;

	cout << "==================================" << endl;
	cout << "Value of number_1: " << number_1 << endl;
	cout << "Address of number_1: " << &number_1 << endl;
	cout << "Pointer store of number_1: " << pointer_1 << endl;
	cout << "Value at address of pointer_1: " << *pointer_1 << endl;
	cout << "==================================" << endl;

	cout << "==================================" << endl;
	cout << "Value of number_2: " << number_2 << endl;
	cout << "Address of number_2: " << &number_2 << endl;
	cout << "Pointer store of number_2: " << pointer_2 << endl;
	cout << "value at address of pointer_2: " << *pointer_2 << endl;
	cout << "==================================" << endl;
	return 0;
}