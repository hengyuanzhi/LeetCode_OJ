#ifndef DEFSTRUCT_H_
#define DEFSTRUCT_H_

#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct TreeLinkNode {
	TreeLinkNode *left;
	TreeLinkNode *right;
	TreeLinkNode *next;
};

#endif