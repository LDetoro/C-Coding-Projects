/**
 * Name: Louis Detoro
 * Email: ldetoro2020@my.fit.edu
 * Project Description: Finds vowels
 *
 */

#include <iostream>

using namespace std;

int main()
{
	char letter, option;

	do
	{
		cout << "Enter a Letter: " << endl; // Prints information to user
		cin >> letter;

		cout << "You entered:";
		cout << letter << endl;

		switch (letter)
		{

		case 'a': // Checks if letter entered is a vowel
			cout << letter << " is a vowel. " << endl;
			break;

		case 'e':
			cout << letter << " is a vowel. " << endl;
			break;

		case 'i':
			cout << letter << " is a vowel. " << endl;
			break;

		case 'o':
			cout << letter << " is a vowel. " << endl;
			break;

		case 'u':
			cout << letter << " is a vowel. " << endl;
			break;

		case 'A':
			cout << letter << " is a vowel. " << endl;
			break;

		case 'E':
			cout << letter << " is a vowel. " << endl;
			break;

		case 'I':
			cout << letter << " is a vowel. " << endl;
			break;

		case 'O':
			cout << letter << " is a vowel. " << endl;
			break;

		case 'U':
			cout << letter << " is a vowel. " << endl;
			break;

		default:
			cout << letter << " is a consonant. " << endl;
			break;
		}

		cout << "Please press Y or y if you would like to re-run the program. " << endl; // Ask user if they would like to re-run the program
		cin >> option;

	} while (option == 'y' || option == 'Y');

	return 0;
}