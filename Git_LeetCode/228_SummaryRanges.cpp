#include<iostream>
#include <vector>
#include <sstream>
#include"defstruct.h"
using namespace std;

class Solution
{
public:
	vector<string> summaryRanges(vector<int>& nums)
	{
		vector<string> result;
		if (nums.empty())return result;
		string s;
		int lastValue = nums[0];
		bool flag = false;
		s += intToString(lastValue);

		auto itr = ++nums.begin();
		while (itr != nums.end())
		{
			if (lastValue + 1 == *itr)
			{
				flag = true;
				lastValue = *itr;
			}
			else
			{
				if (flag)
				{
					flag = false;
					s += "->";
					s += intToString(lastValue);
				}
				result.push_back(s);
				lastValue = *itr; 
				s.clear();
				s += intToString(lastValue);
			}
			itr++;
		}

		if (!s.empty())
		{
			if (flag)
			{
				s += "->";
				s += intToString(lastValue);
			}
			result.push_back(s);
		}
		return result;
	}

private:
	string intToString(int value)
	{
		stringstream ss;	//每次都重新定义会非常消耗资源
		ss << value;
		string s;
		ss >> s;
		return s;
	}
};
