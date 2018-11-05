#include "Node.h"
#include <iostream>
using namespace std;


Node::Node(int val)
{
	value = val;
	next = NULL;
}

Node::Node()
{
	next = NULL;
}

Node::~Node()
{
}
