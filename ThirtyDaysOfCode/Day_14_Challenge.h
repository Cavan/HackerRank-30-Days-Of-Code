#pragma once
#include "common.h"
void Day_14_Challenge();

class Difference {
private:
	vector<int> elements;

public:
	int maximumDifference;
	// Add your code here
	Difference(vector<int> arrayOfInts) {
		this->elements = arrayOfInts;
	}
	//compute the difference
	void computeDifference() {
		int max_so_far = elements[0];
		int min_so_far = elements[0];
		maximumDifference = 0;
		for (int i = 1; i < elements.size(); i++) {
			if (elements[i] > max_so_far) {
				max_so_far = elements[i];
			}
			if (elements[i] < min_so_far) {
				min_so_far = elements[i];
			}
			maximumDifference = max_so_far - min_so_far;
		}
	}
}; // End of Difference class