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

	int32_t length;
	cin >> length;

	vector<int64_t> numbers(length);
	for (auto &number : numbers)
		cin >> number;

	vector<int64_t> sorted(numbers);
	ranges::sort(sorted);

	int32_t out_of_place;
	for (auto number = 0; number < length; number++)
		if (numbers[number] != sorted[number])
			out_of_place++;

	cout << (out_of_place == 2 || !out_of_place ? "YES" : "NO");
}