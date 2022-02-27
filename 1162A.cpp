#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t spots_count, max_height, restrictions_count;
	cin >> spots_count >> max_height >> restrictions_count;

	vector<uint16_t> spots(spots_count, max_height);
	while (restrictions_count--)
	{
		uint16_t left, right, height;
		cin >> left >> right >> height;
		for (auto spot = left - 1; spot < right; spot++)
			spots[spot] = min(height, spots[spot]);
	}

	uint64_t total = 0;
	for (auto spot : spots)
		total += spot * spot;
	cout << total;
}