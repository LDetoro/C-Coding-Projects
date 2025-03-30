/**
 * Name: Louis Detoro
 * Email: ldetoro2020@my.fit.edu
 * Project Description: Energy Calculations
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;

const double GRAVITY = 9.81;

double calculateKineticEnergy(double mass, double velocity)
{
	return mass * velocity * velocity / 2;
}

double calculatePotentialEnergy(double mass, double height) // using pass by reference the variable total
{
	return GRAVITY * mass * height;
}

void totalEnergy(double pe, double ke, double &total)
{
	total = ke + pe;
}

int main()
{

	double mass = 0, velocity = 0, height = 0;
	double ke = 0, pe = 0, total = 0;

	cout << "Please enter mass in kg, for calculation of Kinetic Energy:"; // Prints to user
	cin >> mass;
	cout << "Please enter velocity in m/s, for calculation of Kinetic Energy:";
	cin >> velocity;

	ke = calculateKineticEnergy(mass, velocity);

	cout << fixed << showpoint << setprecision(2);
	cout << "Kinetic Energy is Joule is: " << ke << endl;
	cout << "Please enter mass in kg, for calculation of Potential Energy:";
	cin >> mass;
	cout << "Please enter height in meters, for calculation of Potential Energy: ";
	cin >> height;

	pe = calculatePotentialEnergy(mass, height);

	cout << "Potential Energy is Joule is: " << pe << endl;

	totalEnergy(pe, ke, total);

	cout << "Total Energy is: " << total << endl;

	return 0;
}
