#include <iostream>
#include <map>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t crew_size;
	cin >> crew_size;

	map<string, vector<string>> orders;
	while (crew_size--)
	{
		string name, status;
		cin >> name >> status;
		if (status == "child")
			status = "woman";
		orders[status].push_back(name);
	}

	vector<string> categories = {"rat", "woman", "man", "captain"};
	for (auto order : categories)
		for (auto person : orders[order])
			cout << person << endl;
}