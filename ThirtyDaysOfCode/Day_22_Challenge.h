#pragma once
#include <iostream>
#include <cstddef>

using namespace std;

void Day_22_Challenge();


class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node(int d) {
		data = d;
		left = NULL;
		right = NULL;
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

	int getHeight(Node* root) {
		/*if (root == NULL) {
			return -1;
		}
		else {
			return 1 + max(getHeight(root->left), getHeight(root->right));
		}*/

		//Write your code here
		if (!root) {
			return -1;
		}
		else {
			//Find the depth of the left and right trees
			int leftHeight = getHeight(root->left);
			int rightHeight = getHeight(root->right);

			//return the larger side(one with the most edges)
			if (leftHeight > rightHeight) {

				return (leftHeight + 1);
			}
			else {

				return (rightHeight + 1);
			}
		}

	}

}; //End of Solution