#include <iostream>
#include "LinkedList.h"
using namespace std;


int main(int arg, char **argv)
{

	LinkedList li;

	/*cout << "Enter 10 numbers : ";
	for (int i = 0; i < 10; i++)
	{
		int c;
		cin >> c;
		li.push_back(c);
	}*/

	li.push_back(32);
	li.push_back(12);
	li.push_back(34);
	li.push_back(22);
	li.push_back(64);
	li.push_back(14);
	li.push_back(45);
	li.push_back(705);
	li.push_back(93);
	li.push_back(35);

	li.traverse();

	li.sort();
	li.traverse();

	return 0;

}