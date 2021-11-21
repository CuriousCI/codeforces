#include <iostream>
#include <vector>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

bool is_distinct(uint32_t number)
{
	vector<bool> distinct_digits(10, false);
	for (auto digit : to_string(number))
		distinct_digits[digit - '0'] = true;
	auto count = 0;
	for (auto digit : distinct_digits)
		if (digit)
			count++;
	return count == to_string(number).size();
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t left, right;
	cin >> left >> right;

	for (auto number = left; number <= right; number++)
		if (is_distinct(number))
		{
			cout << number;
			return 0;
		}

	cout << -1;
}