#pragma once
#include<iostream>
#include"TreeLinkNode.h"
#include<queue>
using namespace std;

class CreateBiTree {
public:
	TreeLinkNode* CreateBiTreeByLevel() {
		int val;
		if (!(cin >> val)) return nullptr;
		TreeLinkNode* root = new TreeLinkNode(val),*temp;
		queue<TreeLinkNode*> Level;
		int len;
		Level.push(root);
		while (!Level.empty()) {
			len = Level.size();
			while (len) {
				temp = Level.front();
				if (cin >> val) {
					temp ->left = new TreeLinkNode(val);
					Level.push(temp ->left);
				}
				else cin.clear(), cin.ignore();
				if (cin >> val) {
					temp ->right = new TreeLinkNode(val);
					Level.push(temp ->right);
				}
				else cin.clear(), cin.ignore();
				Level.pop(), len--;
			}
		}
		return root;
	}
	TreeLinkNode* CreateBiTreeByDFS() {
		int val;
		if (!(cin >> val)) return nullptr;
		TreeLinkNode* root = new TreeLinkNode(val);
		root->left = CreateBiTreeByDFS();
		root->right = CreateBiTreeByDFS();
		return root;
	}
};