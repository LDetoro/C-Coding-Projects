/**
 * Name: Louis Detoro
 * Email: ldetoro2020@my.fit.edu
 * Project Description: Lottery system
 *
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int ball();
// int bet[3] = {ball()};

int main()
{

	srand(time(0));

	int option;

	do
	{

		int even = 0, seven = 0, onetwothree = 0; // defining and initializing variables for the test percentages

		int x;

		int first, second, third; // initializing variables for the three drawings

		cout << " Enter Number Of Lotteries: " << endl; // requesting a number of loops from the user

		cin >> x;

		for (int i = 1; i <= x; i++) // using the number of loops from the user to loop the program the certain number of times

		{

			first = ball(); // using the programmer defined function for a random number and defining first and second rolls with that number

			second = ball();

			while (first == second) // do while statement that follows is making sure that first, second, and third are all different numbers.

			{

				second = ball();
			}

			do
			{

				third = ball();

			} while ((third == first) || (third == second));

			cout << "Lottery numbers are: " << first << "-" << second << "-" << third << endl;

			if ((first % 2 == 0) && (second % 2 == 0) && (third % 2 == 0)) // finding the cases in which all three numbers are even

			{
				even++;
			}

			if ((first == 7) || (second == 7) || (third == 7)) // finding the number of cases in which 7 occurs in one drawing

			{
				seven++;
			}

			if ((first <= 3) && (second <= 3) && (third <= 3))

			{

				if ((first != second) && (first != third) && (third != second)) // finding how many times 1,2, and 3 are all shown in one drawing in any order

				{

					onetwothree++;
				}
			}
		}
		cout << "Percentage of time the result contains three even numbers:" << (double)even / x * 100 << "%" << endl; // printing to user as a percentage

		cout << "Percentage of time the number 7 occurs in the three numbers:" << (double)seven / x * 100 << "%" << endl; // printing to user as a percentage

		cout << "Percentage of time the numbers 1,2,3 occur (not necessarily in order):" << (double)onetwothree / x * 100 << "%" << endl; // printing to user as a percentage

		cout << " Another Pick? 1 for yes or 2 for no " << endl;

		cin >> option;

	} while (option == 1); // allowing the user to do the program again

	return 0;
}

int ball() // programmer defined function which gives a random number for the ball drawn
{
	int r1;

	r1 = rand() % 10 + 1;

	return r1;
}