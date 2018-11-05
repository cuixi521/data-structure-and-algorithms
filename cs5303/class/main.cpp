#include "LinkedList.h"
#include <iostream>
using namespace std;

void ShowNames();
void Menu();

int main(int argument_count, char ** argument_vector)
{
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

void Menu() {
	bool done = false;
	int choice = 0;
	int type;
	string number;
	LinkedList Myphone;
	while (!done) {
		cout << endl;
		cout << "Please choose from menu:" << endl;
		cout << "1. Show Names" << endl;
		cout << "2. Add Phone" << endl;
		cout << "3. Traverse" << endl;
		cout << "4. Clear" << endl;
		cout << "5. Quit" << endl;
		cout << ">>";
		cin >> choice;
		switch (choice) {
		case 1:
			ShowNames();
			break;
		case 2:
			cout << "What type of phone would you like to create?" << endl;
			cout << "1. Mobile Phone" << endl;
			cout << "2. Doors Phone" << endl;
			cout << "3. Goggle Phone" << endl;
			cout << "4. Robot Phone" << endl;
			cout << ">>";
			cin >> type;
			cout << "Please enter a 10-digit telephone number" << endl;
			cout << "Ideally in the form of 123-456-7890" << endl;
			cout << ">>";
			cin >> number;
			Myphone.AddPhone(type, number);
			break;
		case 3:
			Myphone.RingPhones();
			break;
		case 4:
			Myphone.Clear();
			break;
		case 5:
			done = true;
			break;
		}
	}
}
