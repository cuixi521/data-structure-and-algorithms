#pragma once
#include<iostream>
#include "MobilePhone.h"

class DoorsPhone :
	public MobilePhone
{
public:
	DoorsPhone();
	DoorsPhone(string phonenumber);
	void Ring();
	~DoorsPhone();
};


