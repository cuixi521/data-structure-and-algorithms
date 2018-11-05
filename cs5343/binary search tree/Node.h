#pragma once
class Node
{
public:
	int value;
	Node *left;
	Node *right;
    Node *parent;
	Node(int val);
    Node();
	~Node();
};

