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

	uint16_t cases;
	cin >> cases;
	while (cases--)
	{
		uint16_t numbers_count;
		cin >> numbers_count;

		vector<uint64_t> numbers(numbers_count);
		for (auto &number : numbers)
			cin >> number;

		uint64_t exponent = 0;
		for (auto &number : numbers)
			while (!(number & 1))
			{
				number /= 2;
				exponent++;
			}

		ranges::sort(numbers);
		numbers.back() *= ((uint64_t)1 << exponent);
		uint64_t sum = 0;
		for (auto number : numbers)
			sum += number;
		cout << sum << endl;
	}
}