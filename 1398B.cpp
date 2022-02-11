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
		string binary;
		cin >> binary;

		vector<uint16_t> ones_ranges;
		uint16_t ones_range = 0;
		for (auto digit : binary)
			if (digit == '1')
				ones_range++;
			else if (digit == '0' && ones_range)
			{
				ones_ranges.push_back(ones_range);
				ones_range = 0;
			}

		if (ones_range)
			ones_ranges.push_back(ones_range);

		ranges::sort(ones_ranges);
		ranges::reverse(ones_ranges);

		uint16_t points = 0;
		for (auto index = 0; index < ones_ranges.size(); index += 2)
			points += ones_ranges[index];

		cout << points << endl;
	}
}