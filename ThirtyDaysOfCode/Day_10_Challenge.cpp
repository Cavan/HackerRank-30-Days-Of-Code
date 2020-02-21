#include "Day_10_Challenge.h"







void Day_10_Challenge() {

	int remainder;
	int n;
	int counter = 0;
	int maxCounter = 0;

	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	

	while (n > 0) {
		remainder = n % 2;
		n = n / 2;
		counter = (counter + remainder) * remainder;
		maxCounter = max(counter, maxCounter);
	}

	cout << maxCounter << endl;

	


}