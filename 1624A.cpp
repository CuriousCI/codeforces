#include <iostream>
#include <vector>
#include <ranges>
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
		uint16_t size;
		cin >> size;

		vector<uint64_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;
		cout << *ranges::max_element(numbers) - *ranges::min_element(numbers) << endl;
	}
}