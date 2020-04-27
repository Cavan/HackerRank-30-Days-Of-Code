#pragma once
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

void Day_27_Challenge();

using namespace std;

int minimum_index(vector<int> seq) {
	if (seq.empty()) {
		throw invalid_argument("Cannot get the minimum value index from an empty sequence");
	}
	int min_idx = 0;
	for (int i = 1; i < seq.size(); ++i) {
		if (seq[i] < seq[min_idx]) {
			min_idx = i;
		}
	}
	return min_idx;
}


class TestDataEmptyArray {
public:
	static vector<int> get_array() {
		// complete this function
		vector<int> emptyArray;
		emptyArray.clear();

		return emptyArray;
	}

};

class TestDataUniqueValues {
public:
	static vector<int> get_array() {
		// complete this function
		vector<int> uniqueVal;
		uniqueVal = { 1, 2, 3, 4 };

		return uniqueVal;
	}

	static int get_expected_result() {
		// complete this function
		return 0;
	}

};

class TestDataExactlyTwoDifferentMinimums {
public:
	static vector<int> get_array() {
		// complete this function
		vector<int> twoDiffMin = { 1, 3, 1 };

		return twoDiffMin;
	}

	static int get_expected_result() {
		// complete this function
		return 0;
	}

};
