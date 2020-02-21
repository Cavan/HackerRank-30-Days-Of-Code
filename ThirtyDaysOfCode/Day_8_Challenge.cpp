#include "Day_8_Challenge.h"



void Day_8_Challenge() {
	//How many entries are going to be made?
	int n;
	string entry;
	string name;
	string query;
	int phoneNumber;
	vector <string> tokens;
	cin >> n;
	//setup phonebook
	map<string, int> phoneBook;

	
	cin.ignore();
	for (int i = 0; i < n; i++) {
	//enter a first name and 8 digit phone number
		getline(cin, entry);
		split2(entry, tokens);
	}
	int nameIndex = 0;
	int numberIndex = 1;
	for (int j = 0; j < n; j++) {

		//convert the string after the whitespace to an integer...
		// and store it as the phone nubmer.
		//cout << "Converting phone number" << endl;
		phoneNumber = stoi(tokens[numberIndex]);

		//store the string the key of the map
		//cout << "Storing name and number" << endl;
		phoneBook.insert(pair<string, int>(tokens[nameIndex], phoneNumber));
		numberIndex = numberIndex + 2;
		nameIndex = nameIndex + 2;
	}

	//accepting a name to query
	cout << "Enter a name to query: " << endl;

	while (getline(cin, query)) {

		if (query.empty())
		{
			break;
		}
		if (phoneBook.find(query) == phoneBook.end())
		{
			cout << "Not found" << endl;
		}
		else {
			//Process the query
			for (auto itr = phoneBook.find(query); itr != phoneBook.end(); itr++) {
				cout << itr->first << "=" << itr->second << endl;
				break;
			}
		}
		
	
	}
}


template <class Container>
void split2(const string& str, Container& cont, char delim)
{
	stringstream ss(str);
	string token;
	while (getline(ss, token, delim)) {
		cont.push_back(token);
	}
	
}