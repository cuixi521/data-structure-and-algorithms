#pragma once
using namespace std;
#include<string>
#include<iostream>

class MobilePhone
{
protected:
	string TelephoneNumber;
	string RingTone;
public:
	MobilePhone();
	MobilePhone * next;
	MobilePhone(string phonenumber);
	void ShowNumber();
	virtual void Ring();
	~MobilePhone();

};
