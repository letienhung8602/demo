#pragma once
#include <iostream>
using namespace std;
struct Node
{
	int info;
	Node *left;
	Node *right;
	Node *root;
	void tree_empty()
	{
		root = NULL;
	}
};
