#include "Day_24_Challenge.h"




void Day_24_Challenge() {
	Node* head = NULL;
	Solution mylist;
	int T, data;
	cin >> T;
	while (T-- > 0) {
		cin >> data;
		head = mylist.insert(head, data);
	}
	head = mylist.removeDuplicates(head);

	mylist.display(head);
}