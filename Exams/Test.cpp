/**
 * Name: Louis Detoro
 * Email: ldetoro2020@my.fit.edu
 * Project Description: Standard Deviation
 *
 */

#include <iostream>
#include <cmath>

using namespace std;

double average(double array[]) // Function that return average
{
	double sum = 0;

	for (int i = 0; i < 4; i++)
	{
		sum += array[i];
	}
	return sum / 4;
}

double deviation(double array[]) // Function that return deviation
{
	double standardDeviation = 0.0;

	for (int i = 0; i < 4; i++)
	{
		standardDeviation += pow(array[i] - average(array), 2);
	}

	cout << "The standard deviation of these numbers = " << sqrt(standardDeviation / 4) << endl;
}

int main() // Driver code
{
	int n = 4;
	double array[4];

	char ch;
	do
	{
		cout << "Enter four decimal numbers => ";

		for (int i = 0; i < n; i++)
		{
			cin >> array[i];
		}

		cout << "The average = " << average(array) << endl;

		deviation(array);

		cout << "Please enter y to continue =>";
		cin >> ch;
		cout << endl;

	} while (ch != 'n');
	return 0;
}