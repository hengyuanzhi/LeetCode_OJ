#include<iostream>
#include <vector>
#include <queue>
#include "defstruct.h"
using namespace std;

class Solution {
public:
	vector<vector<int>> levelOrderBottom(TreeNode* root)
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
				result.push_back(row);
				row.clear();
			}
			row.push_back(t->val);
			l = levelCount.front();
			levelCount.pop();

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
		result.push_back(row);
		vector<vector<int>> bottomResult;
		auto itra = result.rbegin();
		while (itra != result.rend())
		{
			bottomResult.push_back(*itra);
			itra++;
		}
		return bottomResult;
	}
};
