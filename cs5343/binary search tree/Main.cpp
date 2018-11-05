#include <iostream>
#include "BiSearchTree.h"

using namespace std;


int main(int arg, char **argv)
{
	BiSearchTree BST;

	int A[15] = { 28,4,3,19,43,23,15,6,9,2,32,26,8,17,7};
	int i = 0;
	for (i = 0; i < 15; i++)
	{
		BST.AddNode(A[i]);
	}

	BST.Display();
	cout << endl;
	cout << "Delete 32:" << endl;
	BST.Delete(32);
	BST.Display();
	cout << endl;
	cout << "Delete 19:" << endl;
	BST.Delete(19);
	BST.Display();
	cout << endl;
	cout << "Delete 15:" << endl;
	BST.Delete(15);
	BST.Display();
	cout << endl;

	return 0;

}