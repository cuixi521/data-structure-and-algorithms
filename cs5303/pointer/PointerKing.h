#pragma once
#include<string>
class PointerKing
{
private:
	int *intpointer;
	double *doublepointer;
	string *charpointer;

	string mystring= {"I am the Pointer Kiiiing!"};

public:
	PointerKing();
	void Update(int *intpointer, double *doublepointer, string *charpointer);
	void Showtable();
	void Call();
	~PointerKing();
};

