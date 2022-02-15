#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t floors, flats;
	cin >> floors >> flats;
	vector<vector<uint16_t>> building(floors);
	for (auto &floor : building)
	{
		floor = vector<uint16_t>(flats * 2);
		for (auto &window : floor)
			cin >> window;
	}

	uint16_t result = 0;
	for (auto floor : building)
		for (auto flat = 0; flat < flats * 2; flat += 2)
			result += (floor[flat] || floor[flat + 1]);

	cout << result;
}