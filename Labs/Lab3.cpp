/**
 * Name: Louis Detoro
 * Email: ldetoro2020@my.fit.edu
 * Project Description: Boiling Point of multiple substances
 *
 */

#include <iostream>
using namespace std;

int main()
{

	double boilingPoint, minimum, maximum, min = .95, max = 1.05;

	cout << "Enter Boiling point of a substance:" << endl;
	cin >> boilingPoint;

	minimum = boilingPoint * min;
	cout << "Minimum boiling point is:" << minimum << endl;
	maximum = boilingPoint * max;
	cout << "Maximum boiling point is:" << maximum << endl;

	if (boilingPoint >= 95 && boilingPoint <= 105)
	{
		cout << "Substance is WATER\n";
	}
	else if (boilingPoint >= 339.15 && boilingPoint <= 374.85)
	{
		cout << "Substance is Mercury\n";
	}
	else if (boilingPoint >= 1127.65 && boilingPoint <= 1246.35)
	{
		cout << "Substance is Copper\n";
	}
	else if (boilingPoint >= 2083.35 && boilingPoint <= 2302.65)
	{
		cout << "Substance is Silver\n";
	}
	else if (boilingPoint >= 2527 && boilingPoint <= 2793)
	{
		cout << "Substance is Gold" << endl;
	}
	else
	{
		cout << "Substance UNKOWN\n";
	}
}