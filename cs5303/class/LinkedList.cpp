#include "LinkedList.h"
LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
}

void LinkedList::AddPhone(int type, string number)
{
	MobilePhone * start = NULL;
	start = head;
	
	if (type == 1)
	{
		MobilePhone *addNumber = new MobilePhone(number);
		if (start == NULL)
		{
			head = addNumber;
			tail = head;
		}
		else
		{
			tail->next = addNumber;
			tail = addNumber;
		}
	}

	else if (type == 2)
	{
		MobilePhone *addNumber = new GogglePhone(number);
		if (start == NULL)
		{
			head = addNumber;
			tail = head;
		}
		else
		{
			tail->next = addNumber;
			tail = addNumber;
		}
	}
	
	else if (type == 3)
	{
		MobilePhone *addNumber = new DoorsPhone(number);
		if (start == NULL)
		{
			head = addNumber;
			tail = head;
		}
		else
		{
			tail->next = addNumber;
			tail = addNumber;
		}
	}
	
	else if (type == 4)
	{
		MobilePhone *addNumber = new RobotPhone(number);
		if (start == NULL)
		{
			head = addNumber;
			tail = head;
		}
		else
		{
			tail->next = addNumber;
			tail = addNumber;
		}
	}
	   
	size++;
}

void LinkedList::RingPhones()
{
	MobilePhone *temp = NULL;
	temp = head;
	
	if (head == NULL)
	{
		cout << "List is empty" << endl;
	}
	
	while (size != 0)
	{
		temp->ShowNumber();
		temp->Ring();
		temp = temp->next;
		cout << endl;
		size--;
	}
}

void LinkedList::Clear()
{
	MobilePhone *ptr = NULL;
	MobilePhone *start = NULL;
	
	if (head == NULL)
	{
		cout << "List is empty" << endl;
	}
	
	start = head;
	
	while (start != NULL)
	{
		ptr = start;
		start = start->next;
		free(ptr);
	}
	
	head = NULL;
	tail = NULL;
	size = 0;
}

LinkedList::~LinkedList()
{
}