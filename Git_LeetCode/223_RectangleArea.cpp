#include<iostream>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include"defstruct.h"
using namespace std;

class Solution {
public:
	int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
		int result = (C - A)*(D - B) + (G - E)*(H - F);
		if (B >= H || D <= F || C <= E || A >= G)return result;

		return result - abs(max(A, E) - min(C, G))*abs(max(B,F)-min(D,H));

	}
};
