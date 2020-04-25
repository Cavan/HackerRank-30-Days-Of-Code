#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <array>

void Day_26_Challenge();

using namespace std;


class LibraryFees {


public:

	static int calculateFees(array<int,3> returnDate, array<int,3> dueDate) {
		//print out the return date
		//data is stored in the array by [Year] [Month] [Day]
		int fine = 0;
		int daysLate = 0;
		//if yearRet == yearDue && monthRet == monthDue && dayRet < dayDue
		// fine = 0
		if (returnDate[0] == dueDate[0] && returnDate[1] == dueDate[1] && returnDate[2] < dueDate[2]) {
			fine = 0;
		}
		//if yearRet == yearDue && monthRet == monthDue && dayRet > dayDue
		//fine = 15 * (dayRet - dayDue)
		else if (returnDate[0] == dueDate[0] && returnDate[1] == dueDate[1] && returnDate[2] > dueDate[2]) {
			fine = 15 * (returnDate[2] - dueDate[2]);
		}
		//if yearRet == yearDue && monthRet > monthDue
		//fine = 500 * (monthRet - monthDue)
		else if (returnDate[0] == dueDate[0] && returnDate[1] > dueDate[1]) {
			fine = 500 * (returnDate[1] -dueDate[1]);
		}
		else if (returnDate[0] > dueDate[0]) {
			fine = 10000;
		}

		return fine;
	}

};
