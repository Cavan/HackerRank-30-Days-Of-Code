#pragma once
#include "common.h"



void Day_23_Challenge();


class Node {
public:
	int data;
	Node* left, * right;
	Node(int d) {
		data = d;
		left = right = NULL;
	}
};
class Solution {

public:
	Node* insert(Node* root, int data) {
		if (root == NULL) {
			return new Node(data);
		}
		else {
			Node* cur;
			if (data <= root->data) {
				cur = insert(root->left, data);
				root->left = cur;
			}
			else {
				cur = insert(root->right, data);
				root->right = cur;
			}
			return root;
		}
	}

	void levelOrder(Node* root) {
		//Write your code here
		//Write your code here
		queue<Node*> treeValues;
		Node* n = root;

		//while there are nodes to process
		while (n != NULL) {
			//process trees root
			cout << n->data << ' ';
			//cout << treeValues.front() << endl;
			// enqueue child elements from next level in order
			if (n->left != NULL) {
				treeValues.push(n->left);
			}
			if (n->right != NULL) {
				treeValues.push(n->right);
			}
			if (!treeValues.empty()) {
				n = treeValues.front();
				treeValues.pop();
			}
			else {
				n = NULL;
			}
		}

	}

};//End of Solution