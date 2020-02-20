#include "Person.h"
#include "common.h";


Person::Person(int initialAge) {
	// Add some more code to run some checks on initialAge
	if (initialAge < 0) {
		Person::age = 0;
		cout << "Age is not valid, setting age to 0." << endl;
	}
	else {
		Person::age = initialAge;
	}
}

void Person::amIOld() {
	// Do some computations in here and print out the correct statement to the console 
	//if age < 13 print 'You are young
	if (Person::age < 13) {
		cout << "You are young." << endl;
	}
	else if (Person::age >= 13 && Person::age < 18) {
		cout << "You are a teenager." << endl;
	}
	else if (Person::age >= 18) {
	//if age >= 13 and age < 18 print 'You are a teenager
	//Otherwise print you are older
		cout << "You are old." << endl;
	}

}

void Person::yearPasses() {
	// Increment the age of the person in here
	Person::age++;
}
