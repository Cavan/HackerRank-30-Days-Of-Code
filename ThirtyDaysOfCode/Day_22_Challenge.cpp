#include "Day_22_Challenge.h"




void Day_22_Challenge() {

	Solution myTree;
	Node* root = NULL;
	int t;
	int data;

	cin >> t;

	while (t-- > 0) {
		cin >> data;
		root = myTree.insert(root, data);
	}
	int height = myTree.getHeight(root);
	cout << height;

}