#include<iostream>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include"defstruct.h"
using namespace std;

class Solution {
public:
	int mySqrt(int x)
	{
		if (x == 0)return 0;
		double x1, x2;
		x2 = x;

		do
		{
			x1 = x2;
			x2 = 0.5*x1 + 0.5*x / x1;
		} while (abs(x1 - x2) > 0.0001);
		return int(x2);
	}
};
