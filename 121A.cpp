#include <iostream>
#include <ranges>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

bool is_lucky(uint64_t number)
{
	auto digits = to_string(number);

	for (auto digit : digits)
		if (digit != '4' && digit != '7')
			return false;

	return true;
}

uint64_t next_lucky(uint64_t number)
{
	string binary;
	for (auto digit : to_string(number))
		binary += (digit == '4' ? '0' : '1');

	bool is_full = true;
	for (auto digit : binary)
	{
		if (!is_full)
			break;
		is_full = digit == '1';
	}

	string lucky;
	if (!is_full)
	{
		uint64_t value = stoi(binary, 0, 2);
		value++;

		while (value > 0)
		{
			lucky += ((value & 1) ? '7' : '4');
			value >>= 1;
		}

		while (lucky.length() < binary.length())
			lucky += '4';

		ranges::reverse(lucky);
	}
	else
		for (auto _ = 0; _ <= binary.length(); _++)
			lucky += '4';

	return stoi(lucky);
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t left, right;

	cin >> left >> right;
	uint64_t
		smallest_lucky = left,
		biggest_lucky = right;

	while (!is_lucky(biggest_lucky) && biggest_lucky)
		biggest_lucky++;

	while (!is_lucky(smallest_lucky) && smallest_lucky < biggest_lucky)
		smallest_lucky++;

	if (smallest_lucky == biggest_lucky)
		cout << (is_lucky(smallest_lucky) ? smallest_lucky : 0);
	else
	{
		uint64_t lucky_sum = smallest_lucky * (smallest_lucky - left + 1);
		uint64_t next;
		while ((next = next_lucky(smallest_lucky)) < right)
		{
			lucky_sum += next * (next - smallest_lucky);
			smallest_lucky = next;
		}

		lucky_sum += biggest_lucky * (right - smallest_lucky);

		cout << lucky_sum;
	}
}