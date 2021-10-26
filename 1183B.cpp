#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size;
	int64_t range;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> range;
		vector<int64_t> prices(size);
		for (auto &price : prices)
			cin >> price;

		sort(prices.begin(), prices.end());
		auto biggest = prices.front() + range,
			 smallest = prices.back() - range;

		cout << (smallest <= biggest ? biggest : -1) << endl;
	}
}