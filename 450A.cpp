#include <iostream>
#include <deque>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size, candies;
	cin >> size >> candies;

	deque<pair<int32_t, int32_t>> kids(size);
	auto position = 1;
	for (auto &kid : kids)
	{
		cin >> kid.first;
		kid.second = position;
		position++;
	}

	while (kids.size() > 1)
	{
		kids[0].first -= candies;
		if (kids[0].first <= 0)
			kids.pop_front();
		else
		{
			kids.push_back({kids[0].first, kids[0].second});
			kids.pop_front();
		}
	}

	cout << kids[0].second;
}