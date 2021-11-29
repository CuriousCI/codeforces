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

	uint16_t size;
	cin >> size;

	vector<uint16_t> years(size);
	for (auto &year : years)
		cin >> year;

	ranges::sort(years);
	cout << years[(years.size() - 1) / 2];
}