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
		uint64_t count;
		cin >> count;

		vector<uint64_t> numbers(count);
		for (auto &number : numbers)
			cin >> number;

		ranges::sort(numbers);
		int64_t left = -1, right = -1;
		for (auto number : numbers)
			if (number - left == 1)
				left++;
			else if (number - right == 1)
				right++;

		cout << left + right + 2 << endl;
	}
}