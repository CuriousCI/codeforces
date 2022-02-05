#include <iostream>
#include <vector>
#include <ranges>
#include <cmath>
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
		uint16_t length, odds = 0, evens = 0;
		cin >> length;
		vector<uint16_t> numbers(length);
		for (auto &number : numbers)
		{
			cin >> number;
			if (number & 1)
				odds++;
			else
				evens++;
		}

		bool partitionable = false;
		if (!(evens & 1))
			partitionable = true;
		else
		{
			ranges::sort(numbers);
			for (auto number = 0; number < length - 1 && !partitionable; number++)
				partitionable = numbers[number + 1] - numbers[number] == 1;
		}

		cout << (partitionable ? "YES" : "NO") << endl;
	}
}