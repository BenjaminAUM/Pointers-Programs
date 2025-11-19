// Chapter 18 Increment Until Target Using While
#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int max_count;

	cout << "Enter a target number (Between 5 and 20): ";
	cin >> max_count;

	int* pointer_1;
	pointer_1 = &count;

	while (*pointer_1 != max_count)
	{
		count = count++;
		cout << "Current value: " << *pointer_1 << endl;
	}

	cout << "Target has been reached" << endl;
	return 0;
}