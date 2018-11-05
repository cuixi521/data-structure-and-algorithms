#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
	head = NULL;
}


void LinkedList::push_back(int val)
{
	Node * start = NULL;
	Node * newNode = new Node(val);

	start = head;

	if (start == NULL)
	{
		head = newNode;
		tail = head;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
    }
}

void LinkedList::traverse()
{
	Node *start = NULL;
	start = head;
	if (head == NULL)
	{
		cout << "List is empty" << endl;
	}

	while (start != NULL)
	{
		cout << start->value << " ";
		start = start->next;
	}
	cout << endl;

}

void LinkedList::sort()
{
	Node * ptr = NULL;
	Node * start = NULL;
	Node * min = NULL;

	ptr = head;
	start = head;
	min = head;

	while (ptr!=NULL) 
	{
		start = min = ptr;
		while(start!=NULL)
		{
			if(start->value < min->value)
			{
				min = start;
			}
			start = start->next;
		}
		if (ptr != min)
		{
			LinkedList::swap(ptr,min);
		}
		ptr = min->next;
	}
}

void LinkedList::swap(Node *a, Node *b)
{
	Node *ptr = NULL;
	Node *pre_a = NULL;
	Node *pre_b = NULL;
	ptr = head;

	while (ptr->next != NULL)
	{
		if (ptr->next == a)
		{
			pre_a = ptr;
		}
		if (ptr->next == b)
		{
			pre_b = ptr;
		}
		ptr = ptr->next;
	}

	if(a->next == b)
	{
		if(a!=head){
			pre_a->next = b;
		}
		else {
			head = b;
		}
		a->next = b->next;
		b->next = a;
	}
	else
	{
		Node *temp = b->next;
		if (a != head) {
			pre_a->next = b;
		}
		else {
			head = b;
		}
		b->next = a->next;
		pre_b->next = a;
		a->next = temp;
	}
}

void LinkedList::clear()
{
	cout << "Clearing Linked List" << endl;
	Node *ptr = NULL;
	Node *start = NULL;

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
}

LinkedList::~LinkedList()
{
}
