#include "Day_23_Challenge.h"

void Day_23_Challenge() {
	Solution myTree;
	Node* root = NULL;
	int T, data;
	cin >> T;
	while (T-- > 0) {
		cin >> data;
		root = myTree.insert(root, data);
	}
	myTree.levelOrder(root);
	
}