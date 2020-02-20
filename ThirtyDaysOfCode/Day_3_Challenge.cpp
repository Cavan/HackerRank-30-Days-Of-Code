#include "Day_3_Challenge.h"


void Day_3_Challenge() {
	while (1) {
		int N;
		cin >> N;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		if (N % 2 != 0) {
			cout << "Weird" << endl;
		}
		else if (N % 2 == 0 && 
				 N >= 2 &&
				 N <= 5) {
			cout << "Not Weird" << endl;
		}
		else if (N % 2 == 0 &&
			N >= 6 &&
			N <= 20) {
			cout << "Weird" << endl;
		}
		else if (N % 2 == 0 &&
			N > 20) {
			cout << "Not Weird" << endl;
		}
		
	}
}