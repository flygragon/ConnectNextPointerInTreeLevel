#pragma once
#include"TreeLinkNode.h"
#include<iostream>
#include<queue>

class BiTreeOutputByLevel {
public:
	void LevelOutput(TreeLinkNode* root) {
		if (!root) return;
		std::queue<TreeLinkNode*> Level;
		TreeLinkNode*temp;
		int len;
		Level.push(root);
		while (!Level.empty()) {
			len = Level.size();
			for (temp = Level.front(); temp ->next; temp = temp->next)
				std::cout << temp->val << " ";
			std::cout << temp->val << '\n';
			while (len) {
				temp = Level.front();
				if (temp ->left) Level.push(temp ->left);
				if (temp ->right) Level.push(temp ->right);
				Level.pop(), len--;
			}
		}
	}
};