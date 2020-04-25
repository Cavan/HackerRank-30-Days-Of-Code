#include "Day_25_Challenge.h"




void Day_25_Challenge() {
	int T, data;
	cin >> T;
	while (T-- > 0) {
		cin >> data;
		//Call method;
		//CheckPrime::isNumPrime(data);
		//CheckPrime::fastPrimeCheck(data);
		CheckPrime::fastPrimeCheckV2(data);
	}
}