#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<stack>

#include "defstruct.h"
#include"222_CountCompleteTreeNodes.cpp"
using namespace std;

int main()
{
	Solution solu;
	TreeNode *t = new TreeNode(1);
	//t->left = new TreeNode(2);
	//t->right = new TreeNode(3);

	//TreeNode* t = new TreeNode(10);
	//t->left = new TreeNode(5);
	//t->right = new TreeNode(15);
	//t->right->left = new TreeNode(6);
	//t->right->right = new TreeNode(20);
	auto v=solu.countNodes(t);
	cout << v << endl;
	getchar();
	return 0;
}
