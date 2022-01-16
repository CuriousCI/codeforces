#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<string> evolutions = {
		"vaporeon",
		"jolteon",
		"flareon",
		"espeon",
		"umbreon",
		"leafeon",
		"glaceon",
		"sylveon",
	};

	uint16_t length;
	string crossword;
	cin >> length >> crossword;

	for (auto evolution : evolutions)
	{
		bool is_correct = evolution.length() == length;
		for (auto letter = 0; letter < length && is_correct; letter++)
			is_correct = crossword[letter] == '.' || evolution[letter] == crossword[letter];

		if (is_correct)
		{
			cout << evolution;
			break;
		}
	}
}