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
		uint64_t length, operations;
		cin >> length >> operations;

		vector<int64_t> numbers(length);
		for (auto &number : numbers)
			cin >> number;

		if (operations)
		{
			int64_t max_value = *ranges::max_element(numbers);
			for (auto &number : numbers)
				number = max_value - number;

			if (!(operations & 1))
			{
				int64_t max_value = *ranges::max_element(numbers);
				for (auto &number : numbers)
					number = max_value - number;
			}
		}

		for (auto number : numbers)
			cout << number << ' ';
		cout << endl;
	}
}