#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());

		int len = nums.size(),len2=nums.size()-1;
		
		for (int i = 0; i < len; i+=3)
		{
			if (i == len2)return nums[i];
			if (nums[i] != nums[i + 1] || nums[i] != nums[i + 2])return nums[i];
		}
	}
};
