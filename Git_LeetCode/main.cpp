#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<stack>

#include "defstruct.h"
#include"114_FlattenBinaryTreetoLinkedList.cpp"
using namespace std;



int main()
{
	Solution solu;
	TreeNode* t = nullptr;// = new TreeNode(1);
	/*t->left = new TreeNode(2);
	t->left->left = new TreeNode(3);*/
	solu.flatten(t);
	getchar();
	return 0;
}
