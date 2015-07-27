#include<iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include"defstruct.h"
using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums)
	{
		vector<vector<int>> result;
		vector<int> tmp(3,0);
		int i, j, len = nums.size();
		map<int, int> mp;
		auto itera = mp.begin();

		sort(nums.begin(), nums.end());
		for (i = 0; i < len; i++)mp[nums[i]] = i;

		for (i = 0; i < len; i++)
		{
			for (j = i + 1; j < len; j++)
			{
				itera = mp.find(0 - nums[i] - nums[j]);
				if (itera != mp.end() && itera->second > j)
				{
					tmp[0]=nums[i];
					tmp[1]=nums[j];
					tmp[2]=itera->first;
					result.push_back(tmp);
				}
			}
		}

		return result;
	}
};
