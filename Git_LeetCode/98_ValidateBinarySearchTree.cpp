#include<iostream>
#include"defstruct.h"

using namespace std;

class Solution {
public:
	bool isValidBST(TreeNode* root) {
		if (!root)return true;
		return validBST(root, root->val, root->val);
	}

	bool validBST(TreeNode * root,int lMax,int rMin)
	{
		bool flag = true;
		int value = root->val;
		if (root->left!=nullptr)
		{

		}
	}
};
