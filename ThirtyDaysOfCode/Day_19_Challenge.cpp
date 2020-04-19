#include "Day_19_Challenge.h"










void Day_19_Challenge() {
	int n;
	cin >> n;
	pAdvancedArithmetic* myCalculator = new pCalculator();
	int sum = myCalculator->divisorSum(n);
	cout << "I implemented: AdvancedArithmetic\n" << sum;
	
}