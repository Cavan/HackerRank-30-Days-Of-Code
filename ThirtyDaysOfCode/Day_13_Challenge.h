#pragma once
#include "common.h"

void Day_13_Challenge();

class Book {
protected:
	string title;
	string author;
public:
	Book(string t, string a) {
		title = t;
		author = a;
	}
	virtual void display() = 0;

};

// Write your MyBook class here
class MyBook : public Book {
	
	//   Class Constructor
	//   
	//   Parameters:
	//   title - The book's title.
	//   author - The book's author.
	//   price - The book's price.
	//
	string mTitle;
	string mAuthor;
	int mPrice;
public: 
	// Write your constructor here
	MyBook(string title, string author, int price) : Book(title, author) {
		this->mTitle = title;
		this->mAuthor = author;
		this->mPrice = price;
	}

	//   Function Name: display
	//   Print the title, author, and price in the specified format.
	//
	// Write your method here
	void display() {
		cout << "Title: " << mTitle << endl;
		cout << "Author: " << mAuthor << endl;
		cout << "Price: " << mPrice << endl;
	}

// End class
};

