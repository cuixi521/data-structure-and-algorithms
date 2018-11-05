using namespace std;

#include "PointerKing.h"
#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>


void your_output_name_function();
void your_menu_function();

vector <int> fibonacci_vector;
int fibonacci_array[20];
list <int> fibonacci_list;

void Containers();
void Fibonacci();
void Showtable();

int main(int argument_count, char ** argument_vector)
{
	your_output_name_function();
	your_menu_function();
	return 0;
}

void your_output_name_function()
{
	cout << "Xi Cui \n";
	cout << "----------------";
}

void your_menu_function()
{
    bool done = false;
	while (!done)
	{
		cout << "\n";
		cout << "1. Test Containers\n";
		cout << "2. Test Pointers\n";
		cout << "3. Quit\n";

		int choice = 0;
		cin >> choice;
		PointerKing Testpointer;

		switch (choice)
		{
		case 1:
			Containers(); break;
		case 2:
			Testpointer.Call(); break;
		case 3:
			done = true; break;
		}

	}

}

void Containers()
{
	Fibonacci();
	Showtable();
	return;
}

//Fibonacci create
void Fibonacci()
{
	for (int index = 0; index < 20; index++)
	{
		fibonacci_array[index] = 0;
	}

	fibonacci_array[0] = 0;
	fibonacci_array[1] = 1;
	for (int i = 2; i < 20; i++)
	{
		fibonacci_array[i] = fibonacci_array[i - 1] + fibonacci_array[i - 2];
	}

	for (int j = 0; j < 20; j++)
	{
		fibonacci_vector.push_back(fibonacci_array[j]);
		fibonacci_list.push_back(fibonacci_array[j]);
	}
}


void Showtable()
{
	cout << "Vector: ";
	for (int i = 0; i < 20; i++)
	{
		cout << fibonacci_vector[i];
		if (i!=19)
		{
			cout << ",";
		}
	}
	cout << endl;

	cout << "Array : ";
	for (int i = 0; i < 20; i++)
	{
		cout << fibonacci_array[i];
		if (i != 19)
		{
			cout << ",";
		}
	}
	cout << endl;

	cout << "List  : ";
	int counter = 0;		
	for (list<int>::iterator j = fibonacci_list.begin(); j != fibonacci_list.end(); j++) 
	{
		if (counter < 19) 
		{
			cout << *j << ",";
		}
		else {
			cout << *j << "\n";				
		}
		counter++;

	}

}



