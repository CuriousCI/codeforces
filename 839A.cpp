#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t days_number;
	int32_t required_candies;

	cin >> days_number >> required_candies;

	int32_t candies = 0, total_days = 0;
	while (days_number--)
	{
		int32_t candy_box;
		cin >> candy_box;

		int32_t difference = min(8 - candy_box, candies);
		candy_box += difference;
		candies -= difference;

		required_candies -= min(8, candy_box);
		candies += min(8, candy_box) - candy_box;

		total_days++;

		if (required_candies <= 0)
			break;
	}

	cout << (required_candies <= 0 ? total_days : -1);
}