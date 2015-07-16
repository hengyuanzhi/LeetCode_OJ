#include<iostream>
#include<vector>
#include<stack>
#include"defstruct.h"

using namespace std;

class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) 
	{
		vector<int> result;
		if (!root)return result;
		stack<TreeNode *> ss;
		ss.push(root);
		TreeNode * t;

		while (!ss.empty())
		{
			t = ss.top();
			ss.pop();
			result.push_back(t->val);

			if (t->right != nullptr)ss.push(t->right);
			if (t->left != nullptr)ss.push(t->left);
		}
		return result;
	}
};
