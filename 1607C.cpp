#include <iostream>
#include <iterator>
#include <vector>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t size;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<int64_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		if (size == 1)
			cout << numbers.front() << endl;
		else
		{
			sort(numbers.begin(), numbers.end());
			int64_t highest = numbers.front();

			auto accumulator = 0;
			for (auto index = 0; index < size - 1; index++)
			{
				accumulator -= numbers[index];
				highest = max(highest, numbers[index + 1] + accumulator);
				numbers[index + 1] += accumulator;
				highest = highest;
			}

			cout << max(highest, numbers.back()) << endl;
		}
	}
}