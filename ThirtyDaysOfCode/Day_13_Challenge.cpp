#include "Day_13_Challenge.h"









void Day_13_Challenge() {
	string title, author;
	int price;
	getline(cin, title);
	getline(cin, author);
	cin >> price;
	MyBook novel(title, author, price);
	novel.display();
}