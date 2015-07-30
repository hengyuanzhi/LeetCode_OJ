#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<stack>

#include "defstruct.h"
#include"240_SearchA2DMatrixII.cpp"
using namespace std;

int main()
{
	Solution solu;
	//TreeNode *t = new TreeNode(1);
	//t->left = new TreeNode(2);
	//t->right = new TreeNode(3);

	//TreeNode* t = new TreeNode(10);
	//t->left = new TreeNode(5);
	//t->right = new TreeNode(15);
	//t->right->left = new TreeNode(6);
	//t->right->right = new TreeNode(20);
	vector<vector<int>> matrix;
	vector<int> nums1{ 1, 4 };
	vector<int> nums2{ 2, 5 };
	matrix.push_back(nums1);
	matrix.push_back(nums2);

	auto v = solu.searchMatrix(matrix, 2);
	int n = -INT_MIN;
	cout << n << endl;
	getchar();
	return 0;
}
