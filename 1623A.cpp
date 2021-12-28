#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Cell
{
	int64_t row, col;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t cases;
	cin >> cases;
	while (cases--)
	{
		int64_t rows, columns;
		Cell robot, dirt, offset = {1, 1};
		cin >> rows >> columns >> robot.row >> robot.col >> dirt.row >> dirt.col;

		uint64_t time = 0;
		while (robot.row != dirt.row && robot.col != dirt.col)
		{
			if (robot.row + offset.row > rows || robot.row + offset.row < 1)
				offset.row = -offset.row;
			robot.row += offset.row;
			if (robot.col + offset.col > columns || robot.col + offset.col < 1)
				offset.col = -offset.col;
			robot.col += offset.col;
			time++;
		}

		cout << time << endl;
	}
}