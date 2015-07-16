#include<iostream>
#include<stack>
#include"defstruct.h"

using namespace std;

class Solution {
public:
	void flatten(TreeNode* root)
	{
		if (!root)return;
		stack<TreeNode *> ss;
		ss.push(root);
		TreeNode *t, *p;

		while (!ss.empty())
		{
			t = ss.top();
			ss.pop();

			if (t->right != nullptr)ss.push(t->right);
			if (t->left != nullptr)ss.push(t->left);

			if (t == root)
			{
				p = root;
				p->left = nullptr;
			}
			else
			{
				t->left = nullptr;
				p->right = t;
				p = p->right;
			}
		}
	}
};
