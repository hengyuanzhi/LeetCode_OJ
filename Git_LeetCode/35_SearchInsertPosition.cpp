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
	int searchInsert(vector<int>& nums, int target) {
		int len = nums.size() - 1;
		int l = 0, r = len;
		int m = 0;
		while (l <= r)
		{
			m = (l + r) / 2;
			if (target <= nums[m] && m == 0)return 0;
			else if (target >= nums[m] && m == len)return len + 1;
			else if (target > nums[m - 1] && target <= nums[m])return m;
			else if (target > nums[m] && target <= nums[m + 1])return m + 1;
			else if (target<nums[m])
			{
				r = m - 1;
			}
			else
			{
				l = m + 1;
			}
		}
	}
};
