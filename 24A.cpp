#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cities_count;
	cin >> cities_count;

	vector<vector<pair<uint64_t, uint64_t>>> graph(cities_count);
	vector<vector<pair<uint64_t, uint64_t>>> reverse_graph(cities_count);
	while (cities_count--)
	{
		uint64_t origin, destination, cost;
		cin >> origin >> destination >> cost;

		graph[origin - 1].push_back({destination - 1, cost});
		reverse_graph[destination - 1].push_back({origin - 1, cost});
	}
}