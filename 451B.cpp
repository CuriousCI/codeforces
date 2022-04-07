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

	uint64_t size, start = 0;
	cin >> size;

	vector<uint64_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	vector<uint64_t> sorted_numbers(numbers);
	ranges::sort(sorted_numbers);

	uint64_t left = 0, right = size - 1;
	while (numbers[left] == sorted_numbers[left] && left < size)
		left++;
	while (numbers[right] == sorted_numbers[right] && right > 0)
		right--;

	if (left > right)
		cout << "yes\n1 1";
	else
	{
		ranges::reverse(numbers.begin() + left, numbers.begin() + right + 1);
		if (ranges::is_sorted(numbers))
			cout << "yes\n"
				 << left + 1 << ' ' << right + 1;
		else
			cout << "no";
	}
}