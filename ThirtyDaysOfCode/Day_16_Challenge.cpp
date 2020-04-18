#include "Day_16_Challenge.h"

void Day_16_Challenge() {


	string S;
	int convertedInt = -1;
	cin >> S;

	try {
		convertedInt = stoi(S);
		cout << convertedInt;
	}
	catch (exception e)
	{
		cout << "Bad String";
	}



}