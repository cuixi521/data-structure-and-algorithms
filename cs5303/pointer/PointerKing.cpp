using namespace std;
#include "PointerKing.h"
#include <string>
#include <iostream>



PointerKing::PointerKing()
{
	intpointer=NULL;
	doublepointer=NULL;
	charpointer=NULL;

	intpointer = new int(0);
	doublepointer = new double(0.0);
    
	*intpointer = -2016;
	*doublepointer = 81.5;
	charpointer = &mystring;
	
}


void PointerKing::Update(int *intpointer,double *doublepointer,string *charpointer)
{
	
	*intpointer = 2017;
	*doublepointer = 32.1;
	*charpointer = { "It is a glorious thing to be the Pointer King!" };
	
	/*string str = "It is a glorious thing to be the Pointer King!";
	for (int k = 0; k<str.size(); ++k) {
		char_array[k] = str[k];
	}
	charpointer = char_array;*/

}

void PointerKing::Showtable()
{
	cout << "Int Pointer: " << *intpointer << endl;
	cout << "Float Pointer: " << *doublepointer << endl;
	cout << "Char Pointer:  " << *charpointer<<endl << endl;
}

void PointerKing::Call()
{
	PointerKing::Showtable();
	PointerKing::Update(intpointer,doublepointer,charpointer);
	PointerKing::Showtable();

}
PointerKing::~PointerKing()
{
}
