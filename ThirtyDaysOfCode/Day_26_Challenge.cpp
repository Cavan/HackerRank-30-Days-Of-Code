#include "Day_26_Challenge.h"



void Day_26_Challenge() {
	
	
	array<int, 3> returnDate, dueDate;

	//get the return date
	cout << "Please enter the format: D M Y " << endl;
	cin >> returnDate[2] >> returnDate[1] >> returnDate[0];
	cin >> dueDate[2] >> dueDate[1] >> dueDate[0];
	
	 



	// Calculate the library fees
	cout << "Your cost in fines is " << LibraryFees::calculateFees(returnDate, dueDate) << " Hackos";
}