#pragma once
#include "common.h"

void Day_18_Challenge();

//Stacks
/*
	At minimum, any stack, s, should be able to perform the following three operations:

    Peek: Return the object at the top of the stack (without removing it).
    Push: Add an object passed as an argument to the top of the stack.
    Pop: Remove the object at the top of the stack and return it.

*/

//Queues
/*
	At minimum, any queue, q, should be able to perform the following two operations:

    Enqueue: Add an object to the back of the line.
    Dequeue: Remove the object at the head of the line and return it; the element that was previously second in line is now at the head of the line.

*/



class pSolution {


	stack<char> stackVar;
	queue<char> queueVar;

public:
	
	
	void pushCharacter(char ch) {
		stackVar.push(ch);
	}

	void enqueueCharacter(char ch) {
		queueVar.push(ch);
	}
	
	char popCharacter() {
		
		char retStack = ' ';
		retStack = stackVar.top();
		stackVar.pop();

		return retStack;

	}

	char dequeueCharacter() {

		char retQueue = ' ';
		retQueue = queueVar.front();
		queueVar.pop();

		return retQueue;
	}



};