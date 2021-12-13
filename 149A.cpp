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

	uint16_t min_height;
	cin >> min_height;

	vector<uint16_t> year(12);
	for (auto &month : year)
		cin >> month;

	ranges::sort(year);
	ranges::reverse(year);

	uint16_t months = 0, height = 0;
	while (height < min_height && months < 12)
	{
		height += year[months];
		months++;
	}

	cout << (height >= min_height ? months : -1);
}