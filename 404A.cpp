#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t side;
	cin >> side;

	vector<string> grid(side);
	for (auto &line : grid)
		cin >> line;

	char
		foreground = grid[0][0],
		background = grid[0][1];

	bool is_x = foreground != background;

	for (auto y = 0; y < side && is_x; y++)
	{
		is_x = (is_x && grid[y][y] == grid[y][side - y - 1] && grid[y][y] == foreground);
		for (auto x = 0; x < side && is_x; x++)
			if (x != y && x != side - y - 1)
				is_x = (is_x && grid[y][x] == background);
	}

	cout << (is_x ? "YES" : "NO");
}