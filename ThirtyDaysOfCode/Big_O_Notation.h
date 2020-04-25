#pragma once

#include <iostream>
#include <ratio>
#include <chrono>
#include <thread>
#include <array>
#include <vector>
#include <unordered_map>


using namespace std;

void Big_O_Notation();


/*
	n = size of input

	O(1)	  -> constant
	O(log(n)) -> logarithmic
	O(n)	  -> linear
	O(n^2)    -> quadratic 



*/

class RunTimeTests {

	
public:
	void methodTimer() {
		
		auto t1 = chrono::high_resolution_clock::now();
		//do some work
		//**************
		
		//**************
		auto t2 = chrono::high_resolution_clock::now();

		//floating-point duration: no duration_cast needed;
		chrono::duration<double, milli> fp_ms = t2 - t1;

		cout << "Execution Time: " << fp_ms.count() << "ms" << endl;

	}

	static int findNumsOfRepetitions(string s, char c) {
		int sum = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == c) {
				sum++;
			}
		}
		return sum;
	}

	static vector<int> findNumsOfRepetitionsv1(string s, vector<char> c) {
		// Quad time: O(n * m) time
		vector<int> sums;
		sums.resize(c.size()); // 1
		for (int i = 0; i < s.length(); i++) { // 1, n + 1, n
			for (int j = 0; j < c.size(); j++) { // n + 1, n*m + 1, n*m
				if (s[i] == c[j]) {	// n*m
					sums[j] = sums[j] + 1;// n*m
				}
			}
		}


		return sums; // 1
	}

	static vector<int> findNumsOfRepetitionsv2(string s, vector<char> c) {
		vector<int> sums;
		sums.resize(c.size()); // 1
		unordered_map<char, int> myMap;
		for (int i = 0; i < s.length(); i++) {
			if (myMap.find(s[i]) == myMap.end()) {
				myMap.insert({ s[i],1 });
			}
			else {
				int sum = myMap.at(s[i]);
				myMap.insert({ s[i], sum + 1 });
			}
		}

		for (int j = 0; j < c.size(); j++) {
			int sum;
			if (myMap.find(s[j]) == myMap.end()) {
				sums[j] = 0;
			}
			else {
				sums[j] = myMap.at(c[j]);
			}

		}
		return sums;
	}


};