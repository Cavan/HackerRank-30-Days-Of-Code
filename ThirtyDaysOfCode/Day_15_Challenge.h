#pragma once
#include "common.h"

void Day_15_Challenge();


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

	Node* insert(Node* head, int data)
	{
		//Complete this method
		if (head == NULL) {
			return new Node(data);
		}
		if (head->next == NULL) {
			head->next = new Node(data);
		}
		else {
			insert(head->next, data);
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

