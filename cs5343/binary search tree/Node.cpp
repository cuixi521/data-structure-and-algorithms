#include "Node.h"
#include <iostream>
using namespace std;

Node::Node(int val)
{
	value = val;
	left = NULL;
	right = NULL;
	parent = NULL;
}

Node::Node()
{
	left = NULL;
	right = NULL;
	parent = NULL;
}


Node::~Node()
{
}
