#include<iostream>
#include"defstruct.h"

class Solution {
public:
	int countNodes(TreeNode* root) {
		if (!root)return 0;

		int l = getLeftLevel(root);
		int r = getRightLevel(root);

		if (l == r)
		{
			return (2 << (r - 1)) - 1;
		}
		else
		{
			return countNodes(root->left) + countNodes(root->right) + 1;
		}
	}

	int getLeftLevel(TreeNode * root)
	{
		int count = 0;
		while (root)
		{
			count++;
			root = root->left;
		}
		return count;
	}

	int getRightLevel(TreeNode * root)
	{
		int count = 0;
		while (root)
		{
			count++;
			root = root->right;
		}
		return count;
	}
};
