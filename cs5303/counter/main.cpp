using namespace std;

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include "Counter.h"


void your_output_name_function();
void your_menu_function();

int main(int argument_count, char ** argument_vector)
{
	your_output_name_function();
	your_menu_function();
	return 0;
}

void your_output_name_function()
{
	cout << "Xi Cui \n";
	cout << "----------------\n";
}

vector <int> Input_Vector();
vector <int> myVector = {};
void Write_file();
void Count(vector <int> myVector);
void Bargraph(vector<int> myVector);

double Total(vector<int> myVector);
double Average(vector<int>myVector);
double Variance(vector<int> myVector);
double StDev(vector<int> myVector);


void your_menu_function()
{
	double total=0.0;
	double average = 0.0;
	double var = 0.0;
	double std = 0.0;

	bool done = false;
	while (!done)
	{
		cout << "\n";
		cout << "1. Load From a File\n";
		cout << "2. Calculate the Statistics\n";
		cout << "3. Write to a File\n";
		cout << "4. Perform the count\n";
		cout << "5. Display the Bargraph\n";
		cout << "6. Quit\n";

		int choice = 0;
		cin >> choice;

		switch (choice)
		{
		case 1:
			myVector = Input_Vector(); break;
		case 2:
			total=Total(myVector);
			average=Average(myVector);
			var=Variance(myVector);
			std=StDev(myVector);

			cout << "Total   : " << fixed << setprecision(2) << total << endl;
			cout << "Average : " << fixed<<setprecision(2) << average << endl;
			cout << "Variance: " << fixed << setprecision(2) << var << endl;
			cout << "StDev   : " << fixed << setprecision(2) << std << endl;
			
			break;
		case 3:
			Write_file(); break;
		case 4:
			Count(myVector); break;
		case 5:
			Bargraph(myVector); break;
		case 6:
			done = true; break;

		}

	}

}

vector <int> Input_Vector()
{
	cout << "The data is loaded from file: Dice.txt" << endl;
	vector <int> result(0);

	ifstream input;
	input.open("Dice.txt");

	if (!input)

	{
		cout << "Error!";
		cout << input.bad();
		cout << input.fail();
	}


	double total;
	char comma;
	while (input.eof() != true)
	{
		input >> total >> comma;
		result.push_back(total);

	}
	input.close();
	return result;
}


double Total(vector<int> myVector)
{
	double sum = 0.0;
	for (double element : myVector)
	{
		sum = sum + element;
	}

	return sum;
}

double Average(vector<int> myVector)
{
	double mean = 0.0;
	double sum = 0.0;
	int n = 0;
	n = myVector.size();
	sum = Total(myVector);
	mean = sum / n;

	return mean;
}

double Variance(vector<int> myVector)
{
	double var = 0.0;
	double mean = 0.0;
	int n = 0;
	n = myVector.size();
	mean = Average(myVector);
	double dis = 0.0;
	for (double element : myVector)
	{
		dis = dis + (element - mean)*(element - mean);
	}
	var = dis / n;

	return var;
}

double StDev(vector<int> myVector)
{
	double var = 0.0;
	double std = 0.0;

	var = Variance(myVector);
	std = sqrt(var);
	
	return std;
}

void Write_file()
{
	cout << "The outcomes are showed in file named Statistics_outcome.txt" << endl;
	string newfile = "Statistics_outcome.txt";
	ofstream write_file;
	write_file.open(newfile);
	write_file << "Xi Cui \n";
	write_file << "----------------\n";
	write_file << "Total   : " << fixed << setprecision(2) << Total(myVector)<< endl;
	write_file << "Average : " << fixed << setprecision(2) << Average(myVector)<< endl;
	write_file << "Variance: " << fixed << setprecision(2) << Variance(myVector) << endl;
	write_file << "StDev   : " << fixed << setprecision(2) << StDev(myVector) << endl;

	write_file.close();

	return;
}

void Count(vector <int> myVector)
{
	Counter myCounter;
	for(int element:myVector)
	{
		myCounter.Increment(element);
	}

	myCounter.ShowCount();

	return;
}

void Bargraph(vector<int> myVector)
{
	Counter myCounter;
	for (int element : myVector)
	{
		myCounter.Increment(element);
	}
	int rowmax = 0;
    for (int i = 2; i <= 12; i++)
	{
		cout << i;
		cout << " | ";
		rowmax = myCounter.Normalization(i);

		for (int j = 0; j< rowmax; j++)
		{
			cout << "X";
		}
		cout << endl;
	}
	return;
}


