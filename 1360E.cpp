#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

typedef pair<uint16_t, uint16_t> Point;

map<Point, set<Point>> connections;
map<Point, bool> visited;
set<Point> cannon_balls;

void check_configuration(Point point)
{
	visited[point] = true;

	for (auto connection : connections[point])
		if (!visited[connection])
			check_configuration(connection);
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		connections.clear();
		cannon_balls.clear();
		visited.clear();

		uint16_t size;
		cin >> size;

		vector<string> polygon(size);
		for (auto &row : polygon)
			cin >> row;

		for (auto y = 0; y < size; y++)
			for (auto x = 0; x < size; x++)
				if (polygon[y][x] == '1')
					cannon_balls.insert({y, x});

		for (auto y = 0; y < size; y++)
			for (auto x = 0; x < size; x++)
				if (polygon[y][x] == '1')
				{
					if (y > 0)
						if (polygon[y - 1][x] == '1')
						{
							connections[{y, x}].insert({y - 1, x});
							connections[{y - 1, x}].insert({y, x});
						}

					if (x > 0)
						if (polygon[y][x - 1] == '1')
						{
							connections[{y, x}].insert({y, x - 1});
							connections[{y, x - 1}].insert({y, x});
						}
				}

		for (auto y = 0; y < size; y++)
			check_configuration({y, size - 1});

		for (auto x = 0; x < size; x++)
			check_configuration({size - 1, x});

		bool is_configuration_valid = true;
		for (auto cannon_ball : cannon_balls)
		{
			is_configuration_valid = visited[cannon_ball];
			if (!is_configuration_valid)
				break;
		}

		cout << (is_configuration_valid ? "YES" : "NO") << endl;
	}
}