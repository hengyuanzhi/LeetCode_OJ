#include<iostream>
#include<vector>
#include<stack>
#include"defstruct.h"

using namespace std;

class Solution {
public:
	bool isValidBST(TreeNode* root) 
	{
		if (!root)return true;
		vector<int> vec;
		inOrderTraversal(root, vec);
		int t = INT_MIN;
		for (auto val:vec)
		{
			if (t > val)return false;
			t = val;
		}
		return true;
	}

	void inOrderTraversal(TreeNode * root,vector<int> &v)
	{
		if (!root)return;
		inOrderTraversal(root->left,v);
		v.push_back(root->val);
		inOrderTraversal(root->right,v);
	}
};

//class Solution {
//public:
//	bool isValidBST(TreeNode* root) {
//		TreeNode* prev = NULL;
//		return validate(root, prev);
//	}
//	bool validate(TreeNode* node, TreeNode* &prev) {
//		if (node == NULL) return true;
//		if (!validate(node->left, prev)) return false;
//		if (prev != NULL && prev->val >= node->val) return false;
//		prev = node;
//		return validate(node->right, prev);
//	}
//};