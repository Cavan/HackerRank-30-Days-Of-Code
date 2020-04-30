#include "Day_28_Challenge.h"

bool checkEmailService(string emailAddress);
vector<string> split_string(string);
bool compareFunction(string a, string b);







int Day_28_Challenge() {
	int N;
	cin >> N;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	vector<string> gmailUsers;
	for (int N_itr = 0; N_itr < N; N_itr++) {
		string firstNameEmailID_temp;
		getline(cin, firstNameEmailID_temp);

		vector<string> firstNameEmailID = split_string(firstNameEmailID_temp);

		string firstName = firstNameEmailID[0];

		string emailID = firstNameEmailID[1];

		//Print out the vector
		//Check if email id gmail if it is then add to list
		if (checkEmailService(emailID)) {
			gmailUsers.push_back(firstName);
		}
	}

	sort(gmailUsers.begin(), gmailUsers.end(), compareFunction);

	for (vector<string>::iterator it = gmailUsers.begin(); it != gmailUsers.end(); ++it) {
		cout << *it << endl;
	}

	return 0;
}

vector<string> split_string(string input_string) {
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



bool checkEmailService(string emailAddress) {

	bool gmailFound = false;
	//Use regex to check if a user's email is associated with a gmail account
	string target(emailAddress);
	regex pattern("(.+)@gmail.com");
	smatch match;
	regex_search(target, match, pattern);

	

	if (regex_search(target, match, pattern) && match.size() > 1) {
		//cout << "True";
		gmailFound = true;
	}
	else {
		//cout << "False";
		gmailFound = false;
	}
	

	return gmailFound;
}

bool compareFunction(string a, string b) {
	return a < b;
}