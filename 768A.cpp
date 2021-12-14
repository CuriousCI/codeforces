#include <iostream>
#include <vector>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t stewards_count;
	cin >> stewards_count;

	vector<uint64_t> stewards(stewards_count);
	for (auto &steward : stewards)
		cin >> steward;

	if (stewards.size() < 3)
		cout << 0;
	else
	{
		uint64_t support = 0;

		ranges::sort(stewards);

		for (auto index = 1; index < stewards_count - 1; index++)
			if (stewards[index] != stewards.front() && stewards[index] != stewards.back())
				support++;

		cout << support;
	}
}