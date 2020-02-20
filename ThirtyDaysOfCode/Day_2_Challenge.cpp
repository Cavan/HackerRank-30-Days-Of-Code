#include "Day_2_Challenge.h";





void Day_2_Challenge() {
	double meal_cost;
	cin >> meal_cost;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int tip_percent;
	cin >> tip_percent;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int tax_percent;
	cin >> tax_percent;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	solve(meal_cost, tip_percent, tax_percent);
}


void solve(double meal_cost, int tip_percent, int tax_percent) {

	//Calculate the total meal cost and round to the nearest dollar
	//Make sure to add the decimal to the magic number otherwise the result will 
	// be zero.
	double tip = meal_cost * (tip_percent/100.0);
	double tax = meal_cost * (tax_percent/100.0);
	double totalCoast = meal_cost + tip + tax;
	cout << round(totalCoast);


}