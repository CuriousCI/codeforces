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
	while (test_cases--)
	{
		uint32_t size;
		cin >> size;

		vector<uint32_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		ranges::sort(numbers);

		uint32_t good_pairs = 0;
	}
}