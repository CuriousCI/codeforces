#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length, highest = 0;
	string text;

	cin >> length;
	cin.ignore();
	getline(cin, text);

	vector<uint16_t> splits(1, 0);
	for (auto index = 0; index < length; index++)
		if (text[index] == ' ')
			splits.push_back(index);

	for (auto index = 0; index < splits.size(); index++)
	{
		uint16_t temp = 0;
		for (auto letter = splits[index]; letter < (index == splits.size() - 1 ? length : splits[index + 1]); letter++)
			if (text[letter] >= 'A' && text[letter] <= 'Z')
				temp++;
		highest = max(highest, temp);
	}

	cout << highest;
}