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

	int64_t numbers_number, thresholds_number;
	cin >> numbers_number >> thresholds_number;

	vector<int64_t>
		numbers(numbers_number),
		thresholds(thresholds_number);

	for (auto &number : numbers)
		cin >> number;

	for (auto &threshold : thresholds)
		cin >> threshold;

	ranges::sort(numbers);

	for (auto threshold : thresholds)
	{
		int64_t index = 0;

		for (int64_t step = numbers_number - 1; step > 0; step /= 2)
			while (index + step < numbers_number && numbers[index + step] <= threshold)
				index += step;

		cout << (numbers.front() <= threshold ? index + 1 : 0) << ' ';
	}
}