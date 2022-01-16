#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string origin;
	uint16_t new_letters;

	cin >> origin >> new_letters;
	vector<uint16_t> values(26);
	for (auto &value : values)
		cin >> value;

	char most_expensive = 'a';
	uint16_t value = values.front();
	for (auto letter = 0; letter < 26; letter++)
		if (values[letter] >= value)
		{
			most_expensive = 'a' + letter;
			value = values[letter];
		}

	uint64_t total_value = 0;
	for (auto index = 0; index < origin.length() + new_letters; index++)
		if (index < origin.length())
			total_value += values[origin[index] - 'a'] * (index + 1);
		else
			total_value += value * (index + 1);

	cout << total_value;
}