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

	uint16_t
		hooks_count,
		guests_count;
	int16_t fine;

	cin >> hooks_count >> fine;

	vector<int16_t> hooks_prices(hooks_count);
	for (auto &price : hooks_prices)
		cin >> price;

	cin >> guests_count;

	ranges::sort(hooks_prices);

	int32_t profit = 0;
	if (guests_count <= hooks_count)
		for (auto hook = 0; hook < guests_count; hook++)
			profit += hooks_prices[hook];
	else
	{
		for (auto price : hooks_prices)
			profit += price;

		profit -= (guests_count - hooks_count) * fine;
	}

	cout << profit;
}