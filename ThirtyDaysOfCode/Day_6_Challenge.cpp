#include "Day_6_Challenge.h";



void Day_6_Challenge() {
	int t;
	string s = "";
	string even;
	string odd;

	cin >> t;
	//Loop for the number of test cases
	for (int j = 0; j < t; j++) {


	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (i % 2 == 0) {
			even += s[i];
		}
		else {
			odd += s[i];
		}
	}
	

	//print even indexed first 
	//print odd indexed second
	cout << even << " " << odd << endl;
	even.clear();
	odd.clear();

	}

}