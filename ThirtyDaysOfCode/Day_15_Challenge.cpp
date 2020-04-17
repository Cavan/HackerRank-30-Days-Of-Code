#include "Day_15_Challenge.h"






void Day_15_Challenge() {

Node* head = NULL;
Solution mylist;
int T, data;
cin >> T;
while (T-- > 0) {
	cin >> data;
	head = mylist.insert(head, data);
}
mylist.display(head);

}