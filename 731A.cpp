#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string word;
	cin >> word;

	uint32_t distance = 0;
	bool swapped = false;
	char last = 'a';

	for (auto letter : word)
	{
		swapped = false;

		if (last > letter)
		{
			swap(last, letter);
			swapped = true;
		}

		distance += min({
			letter - last,
			26 - (letter - 'a') + (last - 'a'),
		});

		if (!swapped)
			last = letter;
	}

	cout << distance;
}