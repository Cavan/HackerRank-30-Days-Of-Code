#include "Day_27_Challenge.h"



void TestWithEmptyArray() {
	try {
		auto seq = TestDataEmptyArray::get_array();
		auto result = minimum_index(seq);
	}
	catch (invalid_argument & e) {
		return;
	}
	assert(false);
}

void TestWithUniqueValues() {
	auto seq = TestDataUniqueValues::get_array();
	assert(seq.size() >= 2);

	assert(set<int>(seq.begin(), seq.end()).size() == seq.size());

	auto expected_result = TestDataUniqueValues::get_expected_result();
	auto result = minimum_index(seq);
	assert(result == expected_result);
}

void TestWithExactlyTwoDifferentMinimums() {
	auto seq = TestDataExactlyTwoDifferentMinimums::get_array();
	assert(seq.size() >= 2);

	auto tmp = seq;
	sort(tmp.begin(), tmp.end());
	assert(tmp[0] == tmp[1] and (tmp.size() == 2 or tmp[1] < tmp[2]));

	auto expected_result = TestDataExactlyTwoDifferentMinimums::get_expected_result();
	auto result = minimum_index(seq);
	assert(result == expected_result);
}


void Day_27_Challenge() {
	TestWithEmptyArray();
	TestWithUniqueValues();
	TestWithExactlyTwoDifferentMinimums();
	cout << "OK" << endl;
	
}