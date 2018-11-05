#include "GogglePhone.h"
#include<iostream>
#include <string>

GogglePhone::GogglePhone()
{
}

GogglePhone::GogglePhone(string phonenumber)
{
	TelephoneNumber = phonenumber;
	RingTone = "Beep!";
	next = NULL;
}

void GogglePhone::Ring()
{
	for (int i = 0; i < 3; i++)
	{
		cout << RingTone;
	}
}

GogglePhone::~GogglePhone()
{
}