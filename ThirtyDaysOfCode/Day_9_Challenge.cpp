#include "Day_9_Challenge.h"
#pragma warning(disable : 4996)


void Day_9_Challenge() {
	//ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int result = factorial(n);

	//fout << result << "\n";
	cout << result << "\n";

	//fout.close();

	
}


// Complete the factorial function below.
int factorial(int n) {
	
	if (n > 1) {
		//Call method recurively 
		return n * factorial(n - 1);
	}
	else {
		//when n = 1
		return n;
	}

}