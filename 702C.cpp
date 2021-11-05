#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t cities_size, towers_size;
	cin >> cities_size >> towers_size;

	vector<int64_t> cities(cities_size), towers(towers_size), distances(cities_size);
	for (auto &city : cities)
		cin >> city;

	for (auto &tower : towers)
		cin >> tower;

	int64_t tower = 0;
	for (int64_t city = 0; city < cities_size; city++)
	{
		distances[city] = abs(cities[city] - towers[tower]);
		if (tower < towers_size)
			while (abs(cities[city] - towers[tower + 1]) <= distances[city])
			{
				tower++;
				distances[city] = abs(cities[city] - towers[tower]);
			}
	}

	cout << *max_element(distances.begin(), distances.end());
}