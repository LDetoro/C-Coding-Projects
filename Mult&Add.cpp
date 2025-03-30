#include <iostream>

using namespace std;

int main()
{

	double num1, num2, mulNum, add = 10;

	cout << "Please Enter First Value :";
	cin >> num1;

	cout << "Please Enter Second Value :";
	cin >> num2;

	mulNum = (num1 * num2) + add;

	cout << "Multiplied Value Is :" << mulNum << endl;

	return 0;
}