/**
 * Name: Louis Detoro
 * Email: ldetoro2020@my.fit.edu
 * Project Description: Mini van Project
 *
 */

#include <iostream>

using namespace std;

int main()
{
	bool DL, DR, CL, MU, IL, OL, IR, OR;
	char gear;
	int option;

	do
	{
		cout << "Please enter DL DR CL MU IL OL IR OR Gearshift" << endl; // Printing Information for user
		cout << "DL = dashboard switch for left door (0 or 1)" << endl;
		cout << "DR = dashboard switch for right door (0 or 1)" << endl;
		cout << "CL = child lock (0 or 1)" << endl;
		cout << "MU = master unlock (0 or 1)" << endl;
		cout << "IL = inside left door latch (0 or 1)" << endl;
		cout << "OL = outside left door latch (0 or 1)" << endl;
		cout << "IR = inside right door latch (0 or 1)" << endl;
		cout << "OR = outside right door latch (0 or 1)" << endl;
		cout << "Gearshift (P N D 1 2 3 R)" << endl;

		cin >> DL >> DR >> CL >> MU >> IL >> OL >> IR >> OR >> gear;

		if ((gear == 'P') && !CL && (MU))
		{ // Checking if conditions are met to open doors

			if ((DL || IL || OL) && (DR || IR || OR))
			{ // Checking if both doors are open
				cout << "Both Doors Open" << endl;
			}
			else if (DR || IR || OR)
			{ // Checking if right door is open
				cout << "Right Door Opens" << endl;
			}
			else if (DL || IL || OL)
			{ // Checking if left door is open
				cout << "Left Door Opens" << endl;
			}
			else
			{ // If doors were not requested to be open
				cout << "Both Doors Stay Closed" << endl;
			}
		}
		else
		{ // If it fails the conditions for doors to open
			cout << "Both Doors Stay Closed" << endl;
		}
		cout << "Try another simulation? Type 1 for yes and 2 for no " << endl; // Asks user to run again
		cin >> option;

	} while (option == 1);

	return 0;
}