#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class BiSearchTree
{
private:
	Node *root;
public:
	void AddNode(int val);
	void InsertNode(Node **root,Node *n);
	void Traverse(Node * root);
	void Display();
	Node *FindNode(Node *root, int key);
	void Remove(Node *root, int val);
	void Delete(int key);
	BiSearchTree();
	~BiSearchTree();
};

