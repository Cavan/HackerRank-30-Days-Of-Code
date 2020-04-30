#include "Day_29_Challenge.h"


vector<string> split_stringV2(string);
void max_possible_value(int n, int k);


void Day_29_Challenge()
{
	int t;
	cin >> t;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int t_itr = 0; t_itr < t; t_itr++) {
		string nk_temp;
		getline(cin, nk_temp);

		vector<string> nk = split_stringV2(nk_temp);

		int n = stoi(nk[0]);

		int k = stoi(nk[1]);

		//cout << "a&b = %d\n", n&k
		max_possible_value(n, k);

	}

	
}

vector<string> split_stringV2(string input_string) {
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char& x, const char& y) {
		return x == y and x == ' ';
		});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}

void max_possible_value(int n, int k)
{
	int temp = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = (i + 1); j <= n; j++)
		{
			int result = i & j;
			if ((result > temp) && (result < k))
			{
				temp = result;


			}
		}
	}
	std::cout << temp << std::endl;
}