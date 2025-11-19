// Chapter 18 Sum of Two Numbers using Pointers
#include <iostream>
using namespace std;

int main()
{
	int number_1 = 20;
	int number_2 = 25;

	int* pointer_1 = &number_1;
	int* pointer_2 = &number_2;

	int sum = *pointer_1 + *pointer_2;

	cout << "Sum: " << sum << endl;
	return 0;
}