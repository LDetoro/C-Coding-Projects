/**
 * Name: Louis Detoro
 * Email: ldetoro2020@my.fit.edu
 * Project Description: Aluminum Bars
 *
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double initial_width, tolerance, width;

	cout << "Ideal Bar Width (at 70 degrees f): "; // Prints information out to user
	cin >> initial_width;

	cout << "Tolerance for Width Variation: ";
	cin >> tolerance;

	cout << "Temperature	Width		Within Tolerance" << endl;

	for (int temp = 60; temp <= 85; temp++)
	{
		width = initial_width + (temp - 70) * pow(10, -4);
		if (width >= initial_width - tolerance && width <= initial_width + tolerance)
		{
			cout << temp << "		" << width << "			*" << endl;
		}
		else
		{
			cout << temp << "		" << width << endl;
		}
	}

	return 0;
}