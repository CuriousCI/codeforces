#include <iostream>
#include <numeric>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t numbers_count, odd = 0;
	cin >> numbers_count;
	vector<uint64_t> numbers(numbers_count);
	for (auto &number : numbers)
	{
		cin >> number;
		odd += number & 1;
	}

	uint64_t sum = 0;
	for (auto number : numbers)
		sum += number;

	if (odd & 1)
	{
		ranges::sort(numbers);
		for (auto number : numbers)
			if (number & 1)
			{
				sum -= number;
				break;
			}
	}

	cout << sum;
}