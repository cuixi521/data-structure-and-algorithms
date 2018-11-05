using namespace std;
#include"Matrix.h"
#include<iostream>
#include<fstream>

void ShowNames();
void Menu();

int main(int argc, char** argv) {
	ShowNames();
	Menu();
	return 0;
}

void ShowNames()
{
	cout << "Homework 6" << endl;
	cout << "Yuxin Zi" << endl;
	cout << "Yuwen Miao" << endl;
	cout << "Xi Cui" << endl;
	cout << "Kexin Cui" << endl;
	cout << "December 5, 2016" << endl;
	cout << "==================" << endl;
}

void load(Matrix&);

void Menu() {
	
	bool done = false;
	int choice = 0;
	Matrix myLoad;
	Matrix Matrix1;
	Matrix Matrix2;
	Matrix Result;

	while (!done) {
		cout << endl;
		cout << "Matrix Manipulation" << endl;
		cout << "------------------------" << endl;
		cout << "1. Load First Matrix" << endl;
		cout << "2. Load Second Matrix" << endl;
		cout << "3. Add Matrices" << endl;
		cout << "4. Multiply Matrices" << endl;
		cout << "5. Show All Three Matrices" << endl;
		cout << "6. Quit" << endl;
		cout << "::>";
		cin >> choice;
		switch (choice) {
		case 1:
			myLoad.Load(Matrix1);
			break;
		case 2:
			myLoad.Load(Matrix2);
			break;
		case 3:
			Result = Matrix1 + Matrix2;
			break;
		case 4:
			Result = Matrix1 * Matrix2;
			break;
		case 5:
			Matrix1.Show();
			Matrix2.Show();
			Result.Show();
			break;
		case 6:
			done = true;
			break;
		}

	}
}
