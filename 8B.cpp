#include <iostream>
#include <set>
#include <map>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

typedef pair<int64_t, int64_t> Square;

map<Square, set<Square>> graph;
map<Square, int64_t> paths;

void calculate_paths(Square square, Square origin)
{
	for (auto connection : graph[square])
		if (connection != origin)
			if (paths[connection] == 0 || paths[square] + 1 < paths[connection])
			{
				paths[connection] = paths[square] + 1;
				calculate_paths(connection, square);
			}
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string movements;
	cin >> movements;

	vector<Square> path;
	path.push_back({0, 0});

	for (auto movement : movements)
	{
		path.push_back(path.back());

		if (movement == 'L')
			path.back().first--;
		if (movement == 'R')
			path.back().first++;
		if (movement == 'U')
			path.back().second--;
		if (movement == 'D')
			path.back().second++;
	}

	set<Square> squares;
	for (auto square : path)
		squares.insert(square);

	for (auto alpha : squares)
		for (auto beta : squares)
			if ((abs(alpha.first - beta.first) == 1 && alpha.second == beta.second) ||
				(abs(alpha.second - beta.second) == 1 && alpha.first == beta.first))
			{
				graph[alpha].insert(beta);
				graph[beta].insert(alpha);
			}

	paths[{0, 0}] = 1;
	calculate_paths({0, 0}, {0, 0});

	cout << (paths[path.back()] == path.size() ? "OK" : "BUG");
}