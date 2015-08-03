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
	vector<int> searchRange(vector<int>& nums, int target)
	{
		vector<int> result;
		int l = 0, r = nums.size() - 1, m = 0, len = nums.size() - 1;

		while (l <= r)
		{
			m = (l + r) / 2;
			if (target == nums[m])
			{
				int tmp = m;
				while (tmp >= 0)
				{
					if (tmp == 0 || nums[tmp] > nums[tmp - 1])
					{
						result.push_back(tmp);
						break;
					}
					tmp--;
				}
				tmp = m;
				while (tmp <=len)
				{
					if (tmp == len || nums[tmp + 1] > nums[tmp])
					{
						result.push_back(tmp);
						break;
					}
					tmp++;
				}
				break;
				/*if (m == 0 || m == len || nums[m] > nums[m - 1] || nums[m] < nums[m + 1])
					result.push_back(m);*/
			}
			else if (target < nums[m])
				r = m - 1;
			else
				l = m + 1;
		}
		if (result.empty())
		{
			result.push_back(-1);
			result.push_back(-1);
		}
		else
			sort(result.begin(), result.end());
		return result;
	}
};
