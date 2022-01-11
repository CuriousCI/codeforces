#include <iostream>
#include <cmath>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t
		table_size,
		number;

	cin >> table_size >> number;

	set<pair<uint64_t, uint64_t>> divisors;
	for (uint64_t divisor = 1; divisor <= sqrt(number); divisor++)
		if (number % divisor == 0)
			if (max(divisor, number / divisor) <= table_size)
				divisors.insert({min(divisor, number / divisor), max(divisor, number / divisor)});

	uint64_t total_combinations = 0;
	for (auto divisor : divisors)
	{
		total_combinations++;
		if (divisor.first != divisor.second)
			total_combinations++;
	}

	cout << total_combinations;
}