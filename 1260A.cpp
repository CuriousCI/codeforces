#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Room
{
	uint64_t
		max_radiators,
		heat_sum;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t rooms_count;
	cin >> rooms_count;

	Room room;
	while (rooms_count--)
	{
		cin >> room.max_radiators >> room.heat_sum;
		auto rest = room.heat_sum % room.max_radiators;
		auto base = (room.heat_sum - rest) / room.max_radiators;
		uint64_t total_cost = (room.max_radiators - rest) * pow(base, 2);
		total_cost += rest * pow(base + 1, 2);
		cout << total_cost << endl;
	}
}