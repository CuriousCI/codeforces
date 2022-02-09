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
	cout.precision(10);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t size;
		cin >> size;

		vector<int64_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		ranges::sort(numbers);

		double total = 0;
		for (auto index = 0; index < size - 1; index++)
			total += numbers[index];

		cout << total / (size - 1) + numbers.back() << endl;
	}
}