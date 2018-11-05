#include "BiSearchTree.h"

BiSearchTree::BiSearchTree()
{
	root = NULL;
}

void BiSearchTree::AddNode(int val)
{
	Node * n = new Node(val);
	BiSearchTree::InsertNode(&root, n);
}


void BiSearchTree::InsertNode(Node **root, Node * n)
{
	if (*root == NULL)
	{
		*root = n;
		return;
	}
	if ((*root)->value >= n->value)
	{
		if ((*root)->left == NULL) {
			(*root)->left = n;
			n->parent = (*root);
			return;
		}
		else {
			BiSearchTree::InsertNode(&(*root)->left, n);
		}
	}
	else
	{
		if ((*root)->right == NULL) {
			(*root)->right = n;
			n->parent = (*root);
			return;
		}
		else {
			BiSearchTree::InsertNode(&(*root)->right, n);
		}
	}
}

void BiSearchTree::Traverse(Node * root)
{
	if (root == NULL)
	{
		return;
	}
	BiSearchTree::Traverse(root->left);
	cout << root->value << " ";
	BiSearchTree::Traverse(root->right);
}

void BiSearchTree::Display()
{
	BiSearchTree::Traverse(root);
	cout << endl;
}

Node *BiSearchTree::FindNode(Node *root, int key)
{
	if (root == NULL) {
		return NULL;
	}
	if (root->value == key) {
		return root;
	}
	else if (root->value > key) {
		BiSearchTree::FindNode(root->left, key);
	}
	else {
		BiSearchTree::FindNode(root->right, key);
	}
}

void BiSearchTree::Remove(Node *root, int val)
{
	Node *a = BiSearchTree::FindNode(root, val);
	if (a->left == NULL) {
		if (a->right == NULL) {
			if (a->parent->left == a) {
				a->parent->left = NULL;
			}
			else {
				a->parent->right = NULL;
			}
			free(a);//the deleted node is leaf
			cout << "the node you delete is a leaf node." << endl;
		}

		else {

			a->right->parent = a->parent;
			if (a->parent->left == a) {
				a->parent->left = a->right;
			}
			else {
				a->parent->right = a->right;
			}
			free(a);
		}
	}

else {//find predecessor node
	if (a->left->right == NULL) { //the predecessor is the left child of the delete node
		a->left->right = a->right;
		a->left->parent = a->parent;
			if (a->parent->left == a) {
				a->parent->left = a->left;
			}
			else {
				a->parent->right = a->left;
			}
			free(a);
		}
		else {       //the predecessor is the maximum of the deleted node's left subtree 
			Node * b = a->left->right;
			while (b->right != NULL) {
				b = b->right;
			}
			if (b->left == NULL) {  //the node exchange with deleted node is a leaf
                a->value = b->value;
				if (b->parent->left == b) {
					b->parent->left = NULL;
				}
				else {
					b->parent->right = NULL;
				}
				free(b);
				cout << "the replaced predecessor is a leaf node." << endl;
			}
			else {                 //the node exchange with delete node is not a leaf 
				a->value = b->value;
				b->left->parent = b->parent;
				if (b->parent->left == b) {
					b->parent->left = b->left;
				}
				else {
					b->parent->right = b->left;
				}
				free(b);
				cout << "the replaced predecessor is not a leaf node." << endl;
			}
		}
	}
}

void BiSearchTree::Delete(int key)
{
	BiSearchTree::Remove(root, key);
}

BiSearchTree::~BiSearchTree()
{
}
