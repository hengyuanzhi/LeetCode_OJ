#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include"defstruct.h"

using namespace std;

class Solution {
public:
	vector<int> rightSideView(TreeNode* root) 
	{
		vector<int> vec;
		if (!root)return vec;
		queue<TreeNode *> que;
		queue<int> levelCount;
		que.push(root);
		
	}
};
