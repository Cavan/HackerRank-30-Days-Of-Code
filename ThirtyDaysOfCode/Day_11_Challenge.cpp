#include "Day_11_Challenge.h"


void Day_11_Challenge(string filename) {

	vector<vector<int>> arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}
		
		
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}


}