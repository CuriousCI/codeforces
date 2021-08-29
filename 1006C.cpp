#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size;
	cin >> size;

	vector<uint32_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	uint32_t *left = numbers[size / 2],
			 right = numbers[size / 2];
	uint32_t left_sum = 0,
			 right_sum = 0;

	for (auto number = numbers.begin(); number < &left; number++)
		left_sum += *number;
	// while ()
	// {
	// }
}