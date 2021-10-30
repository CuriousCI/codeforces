#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t height, width, x, y;
	cin >> height >> width;

	vector<string> district(height);
	for (auto &road : district)
		cin >> road;

	vector<pair<uint16_t, uint16_t>> crimes;

	for (auto x = 0; x < width; x++)
		for (auto y = 0; y < height; y++)
			if (district[y][x] == '*')
				crimes.push_back({y, x});

	auto cycle = [](auto number, auto size)
	{
		return number % size;
	};

	for (auto crime = 0; crime < crimes.size(); crime++)
	{
		if (crimes[crime].first != crimes[cycle(crime + 1, 3)].first &&
			crimes[crime].first != crimes[cycle(crime + 2, 3)].first)
			y = crimes[crime].first;
		if (crimes[crime].second != crimes[cycle(crime + 1, 3)].second &&
			crimes[crime].second != crimes[cycle(crime + 2, 3)].second)
			x = crimes[crime].second;
	}

	cout << y + 1 << ' ' << x + 1;
}