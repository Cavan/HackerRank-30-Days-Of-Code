#include "Day_20_Challenge.h"

//Bubble sort algorithim 

void Day_20_Challenge() {
	int n;
	cin >> n;
	int totalSwaps = 0;
	int numberOfSwaps = 0;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++) {
		cin >> a[a_i];
	}
	// Write Your Code Here
	for (int i = 0; i < n; i++) {
		// Track number of elements swapped during a single array traversal
		

		for (int j = 0; j < n - 1; j++) {
			// Swap adjacent elements if they are in decreasing order
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				numberOfSwaps++;
			}
		}

		// If no elements were swapped during a traversal, array is sorted
		if (numberOfSwaps == 0) {
			break;
		}
		totalSwaps = numberOfSwaps;
		cout << "Number of Swaps: " << numberOfSwaps << endl;
	}

	cout << "Array is sorted in " << totalSwaps << " swaps." << endl;
	cout << "First Element: " << a[0] << endl;
	int lastElementPosition = (a.size() - 1);
	cout << "Last Element: " << a[lastElementPosition] << endl;

}