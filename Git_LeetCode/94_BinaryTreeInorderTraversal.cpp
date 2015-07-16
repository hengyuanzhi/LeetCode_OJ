#include<iostream>
#include<vector>
#include<stack>
#include"defstruct.h"

using namespace std;

class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) 
	{
		vector<int> result;
		if (!root)return result;
		stack<TreeNode *> ss;
		TreeNode *l = root;

		while (l!=nullptr || !ss.empty())
		{
			while (l!=nullptr)
			{
				ss.push(l);
				l = l->left;
			}
			l = ss.top();
			result.push_back(l->val);
			ss.pop();
			l = l->right;
		}
		return result;
	}
};
