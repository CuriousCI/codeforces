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

	uint16_t mugs_size, cup_volume;
	cin >> mugs_size >> cup_volume;
	vector<uint16_t> mugs(mugs_size);
	for (auto &mug : mugs)
		cin >> mug;
	ranges::sort(mugs.begin(), mugs.end());
	auto total = 0;
	for (auto mug = 0; mug < mugs_size - 1; mug++)
		total += mugs[mug];
	cout << (total <= cup_volume ? "YES" : "NO");
}