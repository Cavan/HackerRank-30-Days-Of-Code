#include "Day_11_Challenge.h"


void Day_11_Challenge() {

	vector<vector<int>> arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
			//debug code

		}



		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	//Code submission ***************************************
	int max_hourglass_sum = -63;
	for (int l = 1; l < 5;l++) {
		for (int m = 1; m < 5; m++) {
			int current_hourglass_sum = getHourglassSum(arr, l, m);
			if (current_hourglass_sum > max_hourglass_sum) {
				max_hourglass_sum = current_hourglass_sum;
			}
		}
	}
	cout << "MAX Sum: " << max_hourglass_sum << endl;
	//Code submission *****************************************


	//The code below here is how I started out.

	//Print out the input
	cout << "\nPrinting the output\n" << endl;
	for (int k = 0; k < 6; k++) {

		for (int l = 0; l < 6; l++) {
			cout << arr[k][l] << " ";
			if (l == 5) {
				cout << "\n";
			}

		}
	}
		int startRow = 0;
		int endRow = 3;
		int startColumn = 0;
		int endColumn = 3;
		int maxRows = 0;
		// Check calculate the sum and store the value of the hourglasses
		int sum = 0;
		int negSum = 0;
		int hourglassSum[16];
		int valueIndex = 0;
		//Print out all hour glasses
		cout << endl << "Print out single hour glass" << endl;

		for (int i = 0; i < 4; i++) {
			cout << "\n";
			
			
			for (int row = startRow; row < endRow; row++) {

				for (int column = startColumn; column < endColumn; column++) {
					cout << arr[row][column] << " ";

					if (column == endColumn -1) {
						cout << "\n";

					}
					//Get 3 values from the hourglass top.
					if (arr[row][column] == 0 || arr[row][column] > 0) {
						sum = sum + arr[row][column];
					}
					else {
						negSum = negSum - arr[row][column];
					}
					//Get the centre value from the hourglass.
					//Get the 3 bottom value of the hourglass.
				}
				
			}
			cout << "Value of hourglass: " << sum << endl;
			hourglassSum[valueIndex] = sum + negSum;
			valueIndex++; 
			//Set sum back to 0 for the next hour glass
			sum = 0;
			//increment columns to advance to the next hourglass
			startColumn++;
			endColumn++;
			if (i == 3) {
				cout << "--------------------" << endl;
				//Reset the column indexes
				startColumn = 0;
				endColumn = 3;
				//increment to the next row
				startRow++;
				endRow++;
				//Reset the row counter
				i = -1;
				//increment maxRow variable
				maxRows++;
				//if maxRow variable equals 3 then we have hit the maximum number ...
				//...of row to count
				if (maxRows == 4) {
					break;
				}
			}
			
		}
		//Sort the array and extract the greatest value
		int n = sizeof(hourglassSum) / sizeof(hourglassSum[0]);
		cout << "Highest Value: " << selectionSort(hourglassSum, n) << endl;
}

//Solution to sort array was taken from: https://www.tutorialspoint.com/cplusplus-program-to-implement-sorted-array
int selectionSort(int a[], int n) {
	int i, j, min, temp;
	int arraySize = 0;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
				if (a[j] < a[min]) {
					min = j;
				}
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
	cout << "Print out all values in order." << endl;
	for (int k = 0; k < n; k++) {
		arraySize++;
	}

	return a[arraySize - 1];
}

int getHourglassSum(vector<vector<int>> matrix, int row, int column) {
	int sum = 0;
	sum += matrix[row - 1][column - 1];
	sum += matrix[row - 1][column];
	sum += matrix[row - 1][column + 1];
	sum += matrix[row][column];
	sum += matrix[row + 1][column - 1];
	sum += matrix[row + 1][column];
	sum += matrix[row + 1][column + 1];
	return sum;
}