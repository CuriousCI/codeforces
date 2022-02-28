#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t houses_number, money;
	int16_t girl_house;
	cin >> houses_number >> girl_house >> money;

	girl_house--;

	vector<uint16_t> prices(houses_number);
	for (auto &price : prices)
		cin >> price;

	uint16_t distance = UINT16_MAX;

	for (auto left = girl_house - 1; left >= 0; left--)
		if (prices[left] <= money && prices[left] != 0)
		{
			distance = min(distance, uint16_t((girl_house - left) * 10));
			break;
		}

	for (auto right = girl_house + 1; right < houses_number; right++)
		if (prices[right] <= money && prices[right] != 0)
		{
			distance = min(distance, uint16_t((right - girl_house) * 10));
			break;
		}

	cout << distance;
}