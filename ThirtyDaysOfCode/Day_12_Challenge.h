#pragma once
#include "common.h"

void Day_12_Challenge();

class Person {
protected:
	string firstName;
	string lastName;
	int id;
public:
	Person() = default;
	Person(string firstName, string lastName, int identification) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->id = identification;
	}
	void printPerson() {
		cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
	}

};

class Student : public Person {
private:
	vector<int> testScores;
public:
	/*
	*   Class Constructor
	*
	*   Parameters:
	*   firstName - A string denoting the Person's first name.
	*   lastName - A string denoting the Person's last name.
	*   id - An integer denoting the Person's ID number.
	*   scores - An array of integers denoting the Person's test scores.
	*/
	// Write your constructor here
	Student(string firstName, string lastName, int id, vector<int> scores);

	/*
	*   Function Name: calculate
	*   Return: A character denoting the grade.
	*/
	// Write your function here
	char calculate();


};


