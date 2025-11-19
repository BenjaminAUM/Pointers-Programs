// Chapter 18 Pointer-Based Mini Calculator
#include <iostream>
using namespace std;

int main()
{
	int number_1, number_2;
	char user_operator;
	double result;

	cout << "Enter two numbers: ";
	cin >> number_1 >> number_2;

	int* pointer_1 = &number_1;
	int* pointer_2 = &number_2;

	cout << "Enter operator: ";
	cin >> user_operator;

	switch (user_operator)
	{
	case '+':
	{
		result = *pointer_1 + *pointer_2;
		cout << "Result: " << result << endl;
		break;
	}
	case '-':
	{
		result = *pointer_1 - *pointer_2;
		cout << "Result: " << result << endl;
		break;
	}
	case '*':
	{
		result = *pointer_1 * *pointer_2;
		cout << "Result: " << result << endl;
		break;
	}
	case '/':
	{
		result = *pointer_1 / *pointer_2;
		cout << "Result: " << result << endl;
		break;
	}
	default:
	{
		cout << "Invalid Operator" << endl;
	}

	return 0;
	}
}