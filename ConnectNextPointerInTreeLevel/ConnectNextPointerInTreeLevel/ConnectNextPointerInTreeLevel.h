#pragma once
#include"TreeLinkNode.h"
#include<queue>

class ConnectTreeLevel {
private:
	void ConnectNext(TreeLinkNode* root) {
		std::queue<TreeLinkNode*> TLN;
		TreeLinkNode* temp;
		int len;
		TLN.push(root);
		while (!TLN.empty()) {
			len = TLN.size();
			while (len >1) {
				temp = TLN.front();
				if (temp->left)
					TLN.push(temp->left);
				if (temp->right)
					TLN.push(temp->right);
				TLN.pop(), len--;
				temp->next = TLN.front();
			}
			if (TLN.front()->left)
				TLN.push(TLN.front()->left);
			if (TLN.front()->right)
				TLN.push(TLN.front()->right);
			TLN.pop();
		}
	}
public:
	void connect(TreeLinkNode *root) {
		if (root && (root->left || root->right))
			ConnectNext(root);
	}

};