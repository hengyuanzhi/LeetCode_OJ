#include<iostream>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include"defstruct.h"
using namespace std;

class Solution {
public:
	double myPow(double x, int n) {
		if (n == 0 || x == 1)return 1.0;

		if (n == INT_MIN)
			return 1 / (myPow(x, INT_MAX)*x);
		else if (n < 0)
			return 1 / myPow(x, -n);	//不能只加这一句，-1*INT_MIN 不等于 INT_MAX,反而-1*INT_MIN还是等于INT_MIN

		double val = myPow(x, n >> 1);

		if (n % 2 == 0)
		{
			return val*val;
		}
		else
		{
			return x*val*val;
		}
	}
};

//class Solution {
//public:
//	double myPow(double x, int n) {
//		if (n == 0 || x == 1)return 1.0;
//		stack<int> count;
//		int t = abs(n);
//		while (t != 0)
//		{
//			count.push(t % 2);
//			t >>= 1;
//		}
//		double result = x;
//		while (!count.empty())
//		{
//			if (count.top() == 1)
//				result = result*result * x;
//			else
//				result *= result;
//			count.pop();
//		}
//		if (n < 0)return 1 / result;
//		return result;
//	}
//};

//超时
//class Solution {
//public:
//	double myPow(double x, int n) {
//		if (n == 0)return 1.0;
//
//		if (n < 0)return myPow(x, -n);
//
//		double tmp = 1;
//
//		for (int i = 0; i < n;i++)
//		{
//			tmp *= x;
//		}
//		return tmp;
//	}
//};
