/**
 * Name: Louis Detoro
 * Email: ldetoro2020@my.fit.edu
 * Project Description: Final Project
 *
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int SIZE = 99; // const size declaration

int readFromFile(int nos[SIZE], string fname) // function to read intgers from file
{

	ifstream myfile;
	int size = 0;
	myfile.open(fname);
	if (myfile.is_open())
	{

		while (myfile >> nos[size])
		{
			size++;
		}

		myfile.close();
	}
	else

		cout << "Unable top open file";

	return size;
}

float calMean(int nos[], int size) // funciton to calculate mean
{
	int total = 0;

	for (int i = 0; i < size; i++)
	{

		total += nos[i];
	}

	return (float)total / size;
}

void display(int nos[], int size) // funciton to display array
{
	for (int i = 0; i < size; i++)
	{
		if (i % 40 == 0)

			cout << endl;

		cout << nos[i] << " ";
	}
}

void sort(int nos[], int size) // funciton to sort array
{
	int tmp;
	for (int i = 0; i < size; i++)
	{

		for (int j = 0; j < size; j++)
		{

			if (nos[i] < nos[j])
			{

				tmp = nos[i];

				nos[i] = nos[j];

				nos[j] = tmp;
			}
		}
	}
}

int calMedian(int nos[], int size) // function to cal median
{

	return nos[size / 2];
}

void calMode(int nos[], int size) // fucniton to cla mode
{
	int uniquenos[size], uniquecount[size], tmpsize = 0;
	cout << "\n***********Response Frequency Histogram**************\n";
	for (int i = 0; i < size; i++)
	{
		bool found = false;

		for (int j = 0; j < tmpsize; j++)
		{

			found = false;

			if (uniquenos[j] == nos[i])
			{

				found = true;

				uniquecount[j]++;
			}
		}

		if (found == false)
		{

			uniquenos[tmpsize] = nos[i];

			uniquecount[tmpsize] = 1;

			tmpsize++;
		}
	}

	int maxindex = -1, max = 0;

	for (int i = 0; i < tmpsize; i++)
	{

		cout << endl;

		cout << uniquenos[i] << " " << uniquecount[i] << " ";

		for (int j = 0; j <= uniquecount[i]; j++)
		{
			cout << "*";
		}

		if (max < uniquecount[i])
		{
			max = uniquecount[i];
			maxindex = i;
		}
	}
	cout << "\nMode is " << uniquenos[maxindex] << " which ocurred " << max << " times";
}

int main()
{
	int nos[SIZE];

	string fname;

	cout << "Enter file name: ";

	cin >> fname;

	int size = readFromFile(nos, fname);

	cout << "Mean : " << calMean(nos, size) << endl;

	cout << "\n***********Unsorted Array**********************\n ";

	display(nos, size);

	cout << "\n\n***********Sorted Array**********************\n ";

	sort(nos, size);

	display(nos, size);

	cout << "\nMedian : " << calMedian(nos, size) << endl;

	calMode(nos, size);

	return 0;
}