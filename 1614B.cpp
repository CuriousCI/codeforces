#include <iostream>
#include <cmath>
#include <deque>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

typedef pair<int64_t, int64_t> Building;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		int64_t buildings_count;
		cin >> buildings_count;

		vector<Building> buildings(buildings_count);
		int64_t index = 1;
		for (auto &building : buildings)
		{
			cin >> building.first;
			building.second = index;
			index++;
		}

		ranges::sort(buildings);
		ranges::reverse(buildings);
		deque<Building> coordinates;
		coordinates.push_back({0, 0});

		bool back = true;
		int64_t divan_coordinate = 0;
		for (auto building : buildings)
		{
			if (back)
				coordinates.push_back(building);
			else
			{
				coordinates.push_front(building);
				divan_coordinate++;
			}

			back = !back;
		}

		vector<int64_t> new_coordinates(buildings_count + 1);
		uint64_t min_walk_time = 0;
		index = 0;
		for (auto building : coordinates)
		{
			new_coordinates[building.second] = index - divan_coordinate;
			min_walk_time += abs(index - divan_coordinate) * 2 * building.first;
			index++;
		}

		cout << min_walk_time << endl;
		for (auto coordinate : new_coordinates)
			cout << coordinate << ' ';
		cout << endl;
	}
}