#include<string>
#include <iostream>
#include "MobilePhone.h"
MobilePhone::MobilePhone()
{
	TelephoneNumber = "000-000-000";
	RingTone = "RING!";
	next = NULL;
}

MobilePhone::MobilePhone(string phonenumber)
{
	TelephoneNumber = phonenumber;
	RingTone = "RING!";
	next = NULL;
}

void MobilePhone::ShowNumber()
{
	cout << TelephoneNumber << ": ";
}

void MobilePhone::Ring()
{
	for (int i = 0; i < 5; i++)
	{
		cout << RingTone;
	}
}

MobilePhone::~MobilePhone()
{
}