#pragma once
using namespace std;
#include "MobilePhone.h"
#include "GogglePhone.h"
#include "DoorsPhone.h"
#include "RobotPhone.h"

class LinkedList
{
private:
	MobilePhone * head;
	MobilePhone * tail;
	int size = 0;
public:
	LinkedList();
	void AddPhone(int type, string number);
	void RingPhones();
	void Clear();
	~LinkedList();
};