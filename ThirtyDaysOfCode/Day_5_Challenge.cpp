#include "Day_5_Challenge.h"


void Day_5_Challenge() {
	int n;
	cin >> n;
	cin.ignore(numeric_limits <streamsize>::max(), '\n');

	for (int i = 1; i < 11; i++) {
		cout << n << " x " << i << " = " << n * i << endl;
	}
}