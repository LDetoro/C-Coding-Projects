#include <iostream>

using namespace std;

int main()
{

	double num1, num2, addNum, subNum, mulNum, divNum;

	cout << "Please Enter First Value :";
	cin >> num1;

	cout << "Please Enter Second Value :";
	cin >> num2;

	addNum = num1 + num2;

	cout << "Added Value Is :" << addNum << endl;

	cout << "Please Enter First Value :";
	cin >> num1;

	cout << "Please Enter Second Value :";
	cin >> num2;

	subNum = num1 - num2;

	cout << "Subtracted Value Is :" << subNum << endl;

	cout << "Please Enter First Value :";
	cin >> num1;

	cout << "Please Enter Second Value :";
	cin >> num2;

	mulNum = num1 * num2;

	cout << "Multiplied Value Is :" << mulNum << endl;

	cout << "Please Enter First Value :";
	cin >> num1;

	cout << "Please Enter Second Value :";
	cin >> num2;

	divNum = num1 / num2;

	cout << "Divided Value Is :" << divNum << endl;

	return 0;
}