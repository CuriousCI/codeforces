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

	uint16_t numbers_count;
	cin >> numbers_count;
	vector<double> numbers(numbers_count);

	for (auto &number : numbers)
		cin >> number;

	ranges::sort(numbers);
	ranges::reverse(numbers);

	for (auto number : numbers)
		if (pow(floor(sqrt(number)), 2) != number)
		{
			cout << (int64_t)number;
			break;
		}
}