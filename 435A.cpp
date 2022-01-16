#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t
		groups_count,
		group,
		bus_size,
		bus = 0,
		total_buses = 0;

	cin >> groups_count >> bus_size;

	while (groups_count--)
	{
		cin >> group;
		if (bus + group > bus_size)
		{
			bus = 0;
			total_buses++;
		}

		bus += group;
	}

	cout << total_buses + bool(bus);
}