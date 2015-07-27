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

		if (itr == nums.end())return false;	//û���ظ�

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

		//if (abs(countIndeces[1] - countIndeces[0]) <= k)return true;	//�ⷨ�����������Ƿ������������λ����k���ڣ������ж���ظ����֣�
		//else return false;
	}
};