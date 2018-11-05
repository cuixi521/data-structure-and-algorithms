#include "RobotPhone.h"

RobotPhone::RobotPhone()
{
}

RobotPhone::RobotPhone(string phonenumber)
{
	TelephoneNumber = phonenumber;
	RingTone = "Go! Go! Ro! Bot! Phone!";
	next = NULL;
}

void RobotPhone::Ring()
{
	for (int i = 0; i < 1; i++)
	{
		cout << RingTone;
	}
}

RobotPhone::~RobotPhone()
{
}