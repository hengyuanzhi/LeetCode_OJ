#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include"defstruct.h"

using namespace std;

class Solution {
public:
	vector<vector<int>> zigzagLevelOrder(TreeNode* root)
	{
		vector<vector<int>> result;
		if (!root)return result;
		vector<int> row;
		queue<TreeNode *> que;
		queue<int> levelCount;
		que.push(root);
		levelCount.push(1);
		TreeNode * t;
		int l = 1;

		while (!que.empty())
		{
			t = que.front();
			que.pop();
			if (l != levelCount.front())
			{
				if (l % 2 == 0)toZigzagLevelOrder(row);
				result.push_back(row);
				row.clear();
			}
			l = levelCount.front();
			levelCount.pop();
			row.push_back(t->val);

			if (t->left != nullptr)
			{
				que.push(t->left);
				levelCount.push(l + 1);
			}
			if (t->right != nullptr)
			{
				que.push(t->right);
				levelCount.push(l + 1);
			}
		}
		if (l % 2 == 0)toZigzagLevelOrder(row);
		result.push_back(row);
		return result;
	}

	void toZigzagLevelOrder(vector<int> &row)
	{
		stack<int> ss;
		for (auto val : row)ss.push(val);
		row.clear();
		while (!ss.empty())
		{
			row.push_back(ss.top());
			ss.pop();
		}
	}
};
