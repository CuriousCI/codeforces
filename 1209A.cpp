#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length;
	cin >> length;

	vector<uint16_t> numbers(length);
	for (auto &number : numbers)
		cin >> number;

	ranges::sort(numbers);

	vector<pair<uint16_t, uint16_t>> colors;
	for (auto number : numbers)
	{
		bool counted = false;
		for (auto &color : colors)
			if (!(number % color.first))
			{
				counted = true;
				color.second++;
				break;
			}

		if (!counted)
			colors.push_back({number, 1});
	}

	cout << colors.size();
}