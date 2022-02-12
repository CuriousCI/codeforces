#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t length;
		cin >> length;

		vector<uint64_t> numbers(length);
		for (auto &number : numbers)
			cin >> number;

		auto back = length - 1;
		while (back > 0 && numbers[back - 1] >)
		{
			/* code */
		}
		}
}