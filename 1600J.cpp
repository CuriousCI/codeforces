#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <cstdint>
#include <algorithm>

#define NORTH 8
#define EAST 4
#define SOUTH 2
#define WEST 1

typedef pair<uint64_t, uint64_t> Tile;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t
		height,
		width;

	cin >> height >> width;

	vector<vector<uint64_t>> factory(height);
	for (auto &line : factory)
	{
		line = vector<uint64_t>(width);
		for (auto &tile : line)
			cin >> tile;
	}

	map<Tile, set<Tile>> connections;
	for (auto line : factory)
		for (auto tile : line)
}