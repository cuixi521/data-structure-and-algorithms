#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList
{
private:
	Node * head;
	Node * tail;
public:
	LinkedList();
	~LinkedList();
	void push_back(int val);
	void sort();
	void swap(Node * a, Node * b);
	void traverse();
	void clear();
};

