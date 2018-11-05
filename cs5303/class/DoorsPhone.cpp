#include "DoorsPhone.h"
#include<iostream>
#include<string>
using namespace std;

DoorsPhone::DoorsPhone()
{
}

DoorsPhone::DoorsPhone(string phonenumber)
{
	TelephoneNumber = phonenumber;
	RingTone = "brt!";
	next = NULL;
}

void DoorsPhone::Ring()
{
	for (int i = 0; i<7; i++)
	{
		cout << RingTone;
	}
}

DoorsPhone::~DoorsPhone()
{
}
