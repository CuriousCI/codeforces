#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t heigth, width;
	int64_t new_walls_number;
	cin >> heigth >> width >> new_walls_number;

	vector<string> maze(heigth);
	for (auto &row : maze)
		cin >> row;

	for (auto y = 0; y < heigth && new_walls_number; y++)
		for (auto x = 0; x < width && new_walls_number; x++)
			if (maze[y][x] == '.')
			{
				maze[y][x] = 'X';
				new_walls_number--;
			}

	for (auto row : maze)
		cout << row << endl;
}