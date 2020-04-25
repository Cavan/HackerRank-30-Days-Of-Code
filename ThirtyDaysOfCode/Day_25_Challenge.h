#pragma once
#include <iostream>

void Day_25_Challenge();

using namespace std;


class CheckPrime {

public:
	static void isNumPrime(int data) {

		//n = data
		//data % n 
		//data / n1..n2..n3..n4..n5
		int divisibleCheck = 0;
		for (int i = 0; i < data; i++)
		{
			if (i != 0) {

				if (data % i == 0) {
					divisibleCheck++;
					if (divisibleCheck > 2) {
						break;
					}
				}
			}
			//else {
			//	//Check if number is divisible by itself
			//	if (data % data == 0) {
			//		divisibleCheck++;
			//	}
			//}
		}
		// Determine if the number was prime
		// if the number is prime then the number was only divisible by 1 and itself
		// which means a module count of 2
		if (divisibleCheck == 1) {
			cout << "Prime" << endl;
		}
		else {
			cout << "Not prime" << endl;
		}
		cout << "Divisble check count: " << divisibleCheck << endl;
	}

	static void fastPrimeCheck(int data) {
		int sqrRoot = sqrt(data);
		for (int i = 2; i <= sqrRoot; i++) {
			if (data % i == 0) {
				cout << "Not prime" << endl;
			}
			else {
				cout << "Prime" << endl;
			}
		}
	}

	static void fastPrimeCheckV2(int data) {
		int val = data;
		for (int i = 2; i <= data / i; i++) {
			if (data % i == 0) {
				val = 1;
			}
		}
		if (val == 1) {
			cout << "Not prime" << endl;
		}
		else {
			cout << "Prime" << endl;
		}
	}

};
