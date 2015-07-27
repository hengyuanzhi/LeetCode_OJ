#include<iostream>
#include <vector>
#include"defstruct.h"
#include <set>
using namespace std;

class Solution
{
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k)
	{
		if (nums.empty())return false;
		set<int> s;
		int duNum;
		auto itr = nums.begin();
		while (itr != nums.end())
		{
			if (s.count(*itr) == 1)
			{
				duNum = *itr;
				break;
			}
			else
			{
				s.insert(*itr);
			}
			itr++;
		}

		if (itr == nums.end())return false;	//没有重复

		auto len = nums.size();
		int count = INT_MIN;
		for (int i = 0; i < len; i++)
		{
			if (nums[i] == duNum)
			{
				if (count == INT_MIN)count = i;
				else if (abs(i - count) <= k)return true;

				count = i;
			}
		}
		return false;

		//if (abs(countIndeces[1] - countIndeces[0]) <= k)return true;	//解法错误，题中问是否存在两个数的位置在k以内（可能有多个重复数字）
		//else return false;
	}
};