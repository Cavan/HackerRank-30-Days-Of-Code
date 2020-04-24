#pragma once
#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

void Day_24_Challenge();

using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node(int d) {
		data = d;
		next = NULL;
	}
};
class Solution {
public:

	Node* removeDuplicates(Node* head)
	{
		//Write your code here
		Node* compareHead = head;
		Node* searchList;
		while (compareHead) {
			searchList = compareHead->next;
			//cout << "Comparing: " << compareHead->data << endl;
			while (searchList) {
				//cout << searchList->data << endl;
				if (compareHead->data == searchList->data) {
					//cout << "duplicate found " << endl;
					compareHead->next = compareHead->next->next;
				}
				searchList = searchList->next;
			}
			compareHead = compareHead->next;
		}

		return head;
	}

	Node* insert(Node* head, int data)
	{
		Node* p = new Node(data);
		if (head == NULL) {
			head = p;

		}
		else if (head->next == NULL) {
			head->next = p;

		}
		else {
			Node* start = head;
			while (start->next != NULL) {
				start = start->next;
			}
			start->next = p;

		}
		return head;


	}
	void display(Node* head)
	{
		Node* start = head;
		while (start)
		{
			cout << start->data << " ";
			start = start->next;
		}
	}
};