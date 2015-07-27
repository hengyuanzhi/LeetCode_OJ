#include<iostream>
#include <vector>
#include <map>
#include <algorithm>
#include"defstruct.h"
using namespace std;

class Solution {
public:
	//”√Hashmap
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> result;
		map<int, int> m;
		int len = nums.size();
		for (int i = 0; i < len; i++)
		{
			m[nums[i]] = i;
		}

		auto itera = m.begin();
		for (int i = 0; i < len; i++)
		{
			itera = m.find(target - nums[i]);
			if (itera != m.end() && itera->second != i)
			{
				result.push_back(min(i + 1, itera->second + 1));
				result.push_back(max(i + 1, itera->second + 1));
				break;
			}
		}

		return result;
	}
};

//≈≈–Ú∑Ω∑®
//class Solution
//{
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		vector<int> copyNums(nums);
//		sort(nums.begin(), nums.end());
//		size_t a = 0, b = nums.size() - 1;
//		while (nums[a] + nums[b] != target)
//		{
//			if (b <= a)
//			{
//				a++;
//				b = nums.size() - 1;
//			}
//			else
//			{
//				b--;
//			}
//		}
//
//		int val1 = nums[a], val2 = nums[b];
//		vector<int> result;
//
//		int length = copyNums.size();
//		for (int i = 0; i < length; i++)
//		{
//			if (val1 == copyNums[i] || val2 == copyNums[i])
//			{
//				result.push_back(i + 1);
//			}
//		}
//
//		sort(result.begin(), result.end());
//		return result;
//	}
//};