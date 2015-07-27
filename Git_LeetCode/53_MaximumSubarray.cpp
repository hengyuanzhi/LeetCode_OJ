#include<iostream>
#include <vector>
#include <algorithm>
#include"defstruct.h"
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums)
	{
		int result=0;
		sort(nums.begin(), nums.end());
		for (auto val : nums)
		{
			if (val > 0)
			{
				result += val;
			}
		}
		return result;
	}
};
