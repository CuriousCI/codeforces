#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t
		numbers_count,
		min_distinct_nums,
		max_distinct_nums;

	cin >> numbers_count >> min_distinct_nums >> max_distinct_nums;

	uint64_t
		min_sum = 0,
		max_sum = 0;

	for (auto exponent = 1; exponent < min_distinct_nums; exponent++)
		min_sum += (1 << exponent);
	min_sum += numbers_count - (min_distinct_nums - 1);

	for (auto exponent = 0; exponent < max_distinct_nums - 1; exponent++)
		max_sum += (1 << exponent);
	max_sum += (numbers_count - (max_distinct_nums - 1)) * (1 << (max_distinct_nums - 1));

	cout << min_sum << ' ' << max_sum;
}