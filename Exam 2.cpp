/*
Name: Louis Detoro
*/

Question 1 :

#include <cstdlib>
#include <iostream>
	using namespace std;

void convert(int, int); // Skeleton of function for converter

int main(int argc, char *argv[])
{
	int feet;
	int inches;

	cout << "Enter number of feet below" << endl;
	cin >> feet;
	cout << "Number of inches?" << endl;
	cin >> inches;

	convert(feet, inches); // Calls method

	system("PAUSE");

	return EXIT_SUCCESS;
}

void convert(int feet, int inches)

{
	double meters = feet * 0.3048;
	double cm = inches * 2.54;

	cout << meters << "meters and" << cm << " centimeters. OR..." << endl;

	cout << meters + (cm / 100) << " meters. OR..." << endl;

	cout << (meters * 100) + cm << " centimeters." << endl;
}

Question 2 :

#include <bits/stdc++.h>
	using namespace std;

int main()
{
	string inputFileName, outputFileName;

	cout << "Enter the file name you want to read data from : ";
	cin >> inputFileName;

	cout << "Enter the file name you want to write data into : ";
	cin >> outputFileName;

	ifstream fin;
	ofstream fout;

	int data;
	double average;
	int cnt = 0;

	fin.open(inputFileName.c_str()); //.c_str() function is used because open() function takes char[] as the argument
	fin >> data;

	int c = 1;
	double sum = data;

	while (!fin.eof())
	{
		fin >> data;
		sum += data;
		c++;
	}

	fin.close();
	average = sum / c;

	fout.open(outputFileName.c_str());

	fout << "The number of data read is " << c << " and the average is " << average;

	fout.close();

	return 0;
}

Question 3 :

#include <iostream>
#include <ctime>
#include <cstdlib>

	using namespace std;

int main()
{

	srand(time(0));

	int number1 = 1 + rand() % 100;
	int number2 = 1 + rand() % 100;

	if (number1 < number2)
	{
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}

	char OPERATION;

	cout << "which would you like to do, ADDITION(+), SUBTRACTION(-)\n";
	cin >> OPERATION;

	switch (OPERATION)
	{
	case '+':

		cout << "What is " << number1 << " + " << number2 << "=" << number1 + number2 << endl;

		break;

	case '-':

		cout << "What is " << number1 << " - " << number2 << "=" << number1 - number2 << endl;

		break;

		break;

	default:

		cout << "Invalid choice";

		break;
	}

	system("pause");
}
