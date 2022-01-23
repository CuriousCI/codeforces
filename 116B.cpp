#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t rows, columns;
	cin >> rows >> columns;

	vector<string> map(rows);
	for (auto &row : map)
		cin >> row;

	uint16_t eaten_pigs = 0;
	for (auto y = 0; y < rows; y++)
		for (auto x = 0; x < columns; x++)
			if (map[y][x] == 'W')
				if ((y > 0 && map[y - 1][x] == 'P') ||
					(y < rows - 1 && map[y + 1][x] == 'P') ||
					(x > 0 && map[y][x - 1] == 'P') ||
					(x < columns - 1 && map[y][x + 1] == 'P'))
					eaten_pigs++;

	cout << eaten_pigs;
}