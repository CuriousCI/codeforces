#include <iostream>
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

	uint16_t cases;
	cin >> cases;
	while (cases--)
	{
		uint64_t size;
		int64_t max_sum;
		cin >> size >> max_sum;

		vector<int64_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		int64_t total_sum = 0;
		for (auto number : numbers)
			total_sum += number;

		if (total_sum <= max_sum)
			cout << 0;
		else
		{
			ranges::sort(numbers);

			int64_t
				min_steps = INT64_MAX,
				decrease = 0;

			while (true)
			{
				int64_t
					steps = 0,
					temp_sum = total_sum - decrease;

				for (auto index = size - 1; index >= 1; index--)
				{
					if (temp_sum <= max_sum)
						break;

					temp_sum -= numbers[index];
					temp_sum += (numbers.front() - decrease);
					steps++;
				}

				if (steps + decrease < min_steps)
					min_steps = steps + decrease;

				if (decrease == max_sum)
					break;

				decrease++;
				// else
				// 	break;
			}

			cout << min_steps;
		}

		cout << endl;
	}
}