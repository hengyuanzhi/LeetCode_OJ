#include<iostream>
#include <stack>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include"defstruct.h"
#include <assert.h>
using namespace std;

class Solution {
public:
	int divide(int dividend, int divisor)
	{
		int flag = 1, result = 0;
		if (divisor == 1)return dividend;
		if (divisor == 0) return INT_MAX;
		if ((dividend < 0 && divisor>0) || (dividend > 0 && divisor < 0))
			flag = -1;

		long long divd = abs((long long)dividend);
		long long div = abs((long long)divisor);
		long long tmp = 0;

		int counter = 1;
		while (divd >= div)
		{
			counter = 1;
			tmp = div;

			while (divd >= tmp)
			{
				tmp <<= 1;
				if (tmp > divd)break;

				counter <<= 1;
			}
			tmp >>= 1;
			divd -= tmp;
			result += counter;
		}

		if (result == INT_MIN)return INT_MAX;	//特别喜欢考察 -INT_MIN,此时是INT溢出导致result=INT_MIN
		return result*flag;
	}
};
