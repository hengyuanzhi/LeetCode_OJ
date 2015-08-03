#include<iostream>
#include <stack>
#include <map>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include"defstruct.h"
using namespace std;

class Solution {
public:
	string convertToTitle(int n)
	{
		string temp, result;
		if (n <= 0)return result;

		while (n != 0)
		{
			n--;						//���ڲ��Ǵ�0��ʼ��������Ҫÿ�ζ�-1
			temp += numToChar(n % 26);
			n /= 26;
		}

		auto ite = temp.rbegin();
		while (ite != temp.rend())
		{
			result += *ite;
			ite++;
		}
		return result;
	}
private:
	inline char numToChar(int num)
	{
		return (char)('A' + num);
	}
};
