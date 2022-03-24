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

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint32_t mountains_number;
		cin >> mountains_number;

		vector<uint64_t> mountains(mountains_number);
		for (auto &mountain : mountains)
			cin >> mountain;

		ranges::sort(mountains);

		uint16_t distance = mountains[1] - mountains[0], index = 0;
		for (auto mountain = 0; mountain < mountains_number - 2; mountain++)
			if (mountains[mountain + 1] - mountains[mountain] <= distance)
			{
				index = mountain;
				distance = mountains[mountain + 1] - mountains[mountain];
			}

		if (index)
			ranges::reverse(mountains);

		{
			auto _ = mountains.front();
			mountains.front() = mountains[index];
			mountains[index] = _;
		}

		{
			auto _ = mountains.back();
			mountains.back() = mountains[index + 1];
			mountains[index + 1] = _;
		}

		for (auto mountain : mountains)
			cout << mountain << ' ';
		cout << endl;
	}
}