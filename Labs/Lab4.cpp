/**
 * Name: Louis Detoro
 * Email: ldetoro2020@my.fit.edu
 * Project Description: Encrypting Numbers
 *
 */

#include <iostream>

using namespace std;

int main()
{
	int input_num, ones_place, tens_place, hundreds_place, thousands_place, count, i = 0, temp; // Initializing Variables

	cout << "Please Enter how many numbers you intend to Encrypt: ";
	cin >> count;
	do
	{
		cout << "Enter a four digit number." << endl;
		cin >> input_num;

		ones_place = input_num % 10;			   // Isolates ones place
		input_num = (input_num - ones_place) / 10; // simplifies number

		tens_place = input_num % 10;
		input_num = (input_num - tens_place) / 10;

		hundreds_place = input_num % 10;
		input_num = (input_num - hundreds_place) / 10;

		thousands_place = input_num;

		ones_place = (ones_place + 7) % 10; // Plus 7 mod 10
		tens_place = (tens_place + 7) % 10;
		hundreds_place = (hundreds_place + 7) % 10;
		thousands_place = (thousands_place + 7) % 10;

		cout << "1st DIGIT replacement using modulus" << endl; // Printing current status
		cout << thousands_place << hundreds_place << tens_place << ones_place << endl;

		temp = thousands_place; // swapping first and third place
		thousands_place = tens_place;
		tens_place = temp;

		temp = hundreds_place; // swapping second and fourth place
		hundreds_place = ones_place;
		ones_place = temp;

		cout << "ENCRYPTED" << endl; // Prints results
		cout << thousands_place << hundreds_place << tens_place << ones_place << endl;

		i++;
	} while (i < count);

	return 0;
}