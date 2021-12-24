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

	uint16_t bars_count;
	cin >> bars_count;

	vector<uint16_t> bars(bars_count);
	for (auto &bar : bars)
		cin >> bar;

	ranges::sort(bars);
	vector<uint16_t> towers;

	uint16_t bar_type = bars.front();
	towers.push_back(0);
	for (auto bar : bars)
		if (bar == bar_type)
			towers.back()++;
		else
		{
			bar_type = bar;
			towers.push_back(1);
		}

	ranges::sort(towers);
	cout << towers.back() << ' ' << towers.size();
}