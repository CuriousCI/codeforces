#include <iostream>
#include <vector>
#include <limits>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Price
{
	double yuan, kilos;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t stores, kilos, store = 0;
	cin >> stores >> kilos;

	vector<Price> prices(stores);
	for (auto &price : prices)
		cin >> price.yuan >> price.kilos;

	auto index = 0;
	double best_rate = numeric_limits<double>::infinity();
	for (auto price : prices)
	{
		if (price.yuan / price.kilos < best_rate)
		{
			best_rate = price.yuan / price.kilos;
			store = index;
		}
		index++;
	}
	std::cout.precision(std::numeric_limits<double>::max_digits10);
	cout << prices[store].yuan * kilos / prices[store].kilos;
}