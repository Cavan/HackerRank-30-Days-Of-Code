#pragma once
#include "common.h"



void Day_17_Challenge();


class Calculator {

public:
	int power(int n, int p) {
		int returnPwr = 0;
		

			if (n < 0 || p < 0) {
				//Throw an exception
				throw runtime_error("n and p should be non-negative");
				
			}
			else {
				returnPwr = pow(n, p);
			}

		
		

		return returnPwr;
	}
};