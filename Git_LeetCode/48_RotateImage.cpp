#include<iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include"defstruct.h"
using namespace std;

class Solution {
public:
	void rotate(vector<vector<int>>& matrix)
	{
		if (matrix.empty())return;
		auto result = matrix;
		int num = matrix[0].size();
		vector<int> row(num, 0);

		int i = 0, j = 0;
		auto rrow = matrix.rbegin();
		auto ite = rrow->begin();
		while (rrow != matrix.rend())
		{
			j = 0;
			ite = rrow->begin();
			while (ite != rrow->end())
			{
				result[j++][i] = *ite;
				ite++;
			}
			i++;
			rrow++;
		}
		matrix = result;
	}
};