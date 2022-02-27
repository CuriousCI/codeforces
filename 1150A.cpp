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

	uint32_t sell_ways, buy_ways, burles;
	cin >> sell_ways >> buy_ways >> burles;

	vector<int16_t> sells(sell_ways), buys(buy_ways);
	for (auto &sell : sells)
		cin >> sell;
	for (auto &buy : buys)
		cin >> buy;

	auto min_sell = *ranges::min_element(sells),
		 max_buy = *ranges::max_element(buys);

	if (min_sell < max_buy)
	{
		auto bought = (burles - (burles % min_sell)) / min_sell;
		burles -= bought * min_sell;
		burles += bought * max_buy;
	}

	cout << burles;
}