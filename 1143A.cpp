#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t doors_count;
	cin >> doors_count;

	vector<int16_t> doors(doors_count);
	for (auto &door : doors)
		cin >> door;

	int64_t last_zero_door = INT64_MAX,
			last_one_door = INT64_MAX,
			door = doors_count - 1;

	while (door >= 0 && (last_zero_door == INT64_MAX || last_one_door == INT64_MAX))
	{
		if (doors[door] && last_one_door == INT64_MAX)
			last_one_door = door;
		if (!doors[door] && last_zero_door == INT64_MAX)
			last_zero_door = door;

		door--;
	}

	cout << min(last_one_door, last_zero_door) + 1;
}