// Chapter 18 print value, address, and dereference
#include <iostream>
using namespace std;

int main()
{
	int number;
	number = 10;

	int* pointer_1;
	pointer_1 = &number;

	cout << "Number: " << number << endl;
	cout << "Address: " << &number << endl;
	cout << "Pointer stores: " << pointer_1 << endl;
	cout << "Pointer value: " << *pointer_1 << endl;
	return 0;
}