#include<iostream>
#include<stack>
#include"defstruct.h"

class Solution {
public:
	void connect(TreeLinkNode *root)
	{
		if (root == nullptr || root->left == nullptr)return;
		root->left->next = root->right;

		if (root->next != nullptr)root->right->next = root->next->left;

		connect(root->left);
		connect(root->right);
	}
};
