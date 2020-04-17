#include "Day_12_Challenge.h"



Student::Student(string firstName, string lastName, int id, vector<int> scores) {
	this->testScores = scores;
}


char Student::calculate() {
	int scoreSum = 0;
	int scoreCount = testScores.size();
	int gradeAverage = 0;
	char retGrade = ' ';
	//Calculate test scrores
	for (auto i = testScores.begin(); i != testScores.end(); i++) {
		//scoreSum = scoreSum + testScores[i];
		cout << *i << endl;
		scoreSum = scoreSum + *i;
	}
	//Get average from vector testScores
	gradeAverage = scoreSum / scoreCount;
	//Assign grade
	//if score is 90 - 100 Return 'O'
	//if score is 80 - 90 return 'E'
	//if score is 70 - 80 return 'A'
	//if score is 55 - 70 return 'P'
	//if score is 40 - 55 return 'D'
	//if score is less than 40 return 'T'
		if (gradeAverage <= 100 && gradeAverage >= 90) {
			retGrade = 'O';
		}
		else if (gradeAverage <= 90 && gradeAverage >= 80) {
			retGrade = 'E';
		}
		else if (gradeAverage <= 80 && gradeAverage >= 70) {
			retGrade = 'A';
		}
		else if (gradeAverage <= 70 && gradeAverage >= 55) {
			retGrade = 'P';
		}
		else if (gradeAverage <= 55 && gradeAverage >= 40) {
			retGrade = 'D';
		}
		else if (gradeAverage < 40) {
			retGrade = 'T';
		}



	return retGrade;
}



void Day_12_Challenge() {
	string firstName;
	string lastName;
	int id;
	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
	vector<int> scores;
	for (int i = 0; i < numScores; i++) {
		int tmpScore;
		cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	
}