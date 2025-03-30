/**
 * Name: Louis Detoro
 * Email: ldetoro2020@my.fit.edu
 * Project Description: Reading Data
 *
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{

	ifstream file_in;
	ofstream file_out; // create two file streams one for reading and one for writing.

	file_in.open("LabInput.dat"); // Opening file input.dat

	if (!file_in)
	{ // If error in reading or file is not there, raise an error.

		cout << "Unable to open file";

		return 0; // terminate
	}

	file_out.open("LabOutput.dat"); // opening file "sample.txt"

	if (!file_out) // If error in creating file, raise an error.
	{
		cout << "Error in creating file!!!" << endl;
		return 0; // terminate
	}

	int N = 0;

	while (file_in >> N) // Read N value from file
	{

		file_out << "Read " << N << " numbers" << endl;
		file_out << "The numbers are: ";

		int sum = 0;

		for (int i = 0; i < N; i++)
		{
			int number;
			file_in >> number;
			file_out << number << endl;
			sum += number;
		}
		file_out << "The average is:" << (float)sum / N << endl
				 << endl;
	}

	file_in.close();
	file_out.close();

	return 0;
}