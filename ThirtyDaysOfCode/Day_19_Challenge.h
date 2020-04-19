#pragma once
#include "common.h"

void Day_19_Challenge();

class pAdvancedArithmetic {
public:
	virtual int divisorSum(int n) = 0;
};
class pCalculator : public pAdvancedArithmetic {

	vector<int> m_divisorSum;

	int divisorSum(int n) {
		int retSum = 0;
		for (int i = 0; i < n; i++) {
			if (i != 0) {

				if (n % i == 0) {
					m_divisorSum.push_back(i);
				}
			}
	}
	cout << "Divisors for " << n << endl;
	while (!m_divisorSum.empty()) {
		retSum += m_divisorSum.back();
		m_divisorSum.pop_back();
	}
	//Add 'n' to the retSum
	retSum += n;

	return retSum;
}
};


