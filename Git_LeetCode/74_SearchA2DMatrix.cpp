#include<iostream>
#include <stack>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include"defstruct.h"
using namespace std;

class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target)
	{
		if (matrix.empty())return false;

		int  len = matrix.size();
		if (target < matrix[0][0])return false;
		if (target > matrix[len - 1][matrix[len - 1].size() - 1])return false;

		int l = 0, r = matrix.size() - 1, m;
		while (l <= r)
		{
			m = (l + r) / 2;
			len = matrix[m].size();
			if (target >= matrix[m][0] && target <= matrix[m][len - 1])
				return searchRow(matrix[m], target);
			else if (target < matrix[m][0])
				r = m - 1;
			else
				l = m + 1;
		}
		return false;
	}

	bool searchRow(vector<int> &nums, int target)
	{
		int len = nums.size() - 1;
		int l = 0, r = len, m;

		while (l <= r)
		{
			m = (l + r) / 2;
			if (nums[m] == target)
				return true;
			else if (nums[m] < target)
				l = m + 1;
			else if (nums[m] > target)
				r = m - 1;
		}
		return false;
	}
};
