/**
 * Name: Louis Detoro
 * Email: ldetoro2020@my.fit.edu
 * Project Description: This is a basic calculations project
 *
 */

#include <iostream>
using namespace std;

int main()
{
	double miles, kilometers, meters, kilograms, pounds, newtons, fahrenheit, rankine, celsius, kelvin;

	cout << "(1 mile =1.60934 kilometers)" << endl;
	cout << "Enter Miles:";
	cin >> miles;
	kilometers = miles * 1.60934;
	cout << "kilometers = " << kilometers << endl;

	cout << "(1 meter =0.000621371 miles)" << endl;
	cout << "Enter Meters:";
	cin >> meters;
	miles = meters * 0.000621371;
	cout << "miles = " << miles << endl;

	cout << "(1 pound =0.453592 kilograms)" << endl;
	cout << "Enter Pounds:";
	cin >> pounds;
	kilograms = pounds * 0.453592;
	cout << "kilograms = " << kilograms << endl;

	cout << "(1 newton =0.224809 pounds)" << endl;
	cout << "Enter newtons:";
	cin >> newtons;
	pounds = newtons * 0.224809;
	cout << "Pounds = " << pounds << endl;

	cout << "(rankine = fahrenheit + 459.67)" << endl;
	cout << "Enter Fahrenheit:";
	cin >> fahrenheit;
	rankine = fahrenheit + 459.67;
	cout << "Rankine = " << rankine << endl;

	cout << "(1 fahrenheit = kelvin * 1.8 - 459.67)" << endl;
	cout << "Enter kelvin:";
	cin >> kelvin;
	fahrenheit = kelvin * 1.8 - 459.67;
	cout << "Fahrenheit = " << fahrenheit << endl;

	cout << "(1 rankine = celsius * 1.8 + 491.67)" << endl;
	cout << "Enter Celsius:";
	cin >> celsius;
	rankine = celsius * 1.8 + 491.67;
	cout << "Rankine = " << rankine << endl;
}