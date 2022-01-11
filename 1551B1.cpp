#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string characters;
		cin >> characters;

		map<char, uint64_t> frequency;
		for (auto character : characters)
			frequency[character]++;

		uint64_t twoplus = 0, once = 0;
		for (auto number : frequency)
			if (number.second == 1)
				once++;
			else
				twoplus++;

		cout << twoplus + (once - (once & 1)) / 2 << endl;
	}
}