#include <iostream>
#include <cmath>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint32_t size, lowest, highest, budget;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> lowest >> highest >> budget;
		vector<uint32_t> prices(size);
		for (auto &price : prices)
			cin >> price;
		ranges::sort(prices);
		auto result = 0;
		for (auto price = 0; price < size; price++)
			if (prices[price] >= lowest && prices[price] <= highest && budget >= prices[price])
			{
				result++;
				budget -= prices[price];
			}

		cout << result << endl;
	}
}