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
	int findMin(vector<int>& nums)
	{
		int len = nums.size() - 1;
		for (int i = 0; i < len; i++)
		{
			if (nums[i]>nums[i + 1])return nums[i + 1];
		}
		return nums[0];
	}
};

////≈≈–ÚAccept
//class Solution {
//public:
//	int findMin(vector<int>& nums)
//	{
//		sort(nums.begin(), nums.end());
//		return nums[0];
//	}
//};
