#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint16_t
			rows_count,
			columns_count,
			y, x;

		cin >> rows_count >> columns_count >> y >> x;

		y--;
		x--;

		vector<string> grid(rows_count);
		for (auto &row : grid)
			cin >> row;

		bool has_blacks = false;

		if (grid[y][x] == 'B')
			cout << 0;
		else
		{
			for (auto row = 0; row < rows_count && !has_blacks; row++)
				for (auto column = 0; column < columns_count && !has_blacks; column++)
					has_blacks = grid[row][column] == 'B';

			if (!has_blacks)
				cout << -1;
			else
			{
				bool found_coincident = false;

				for (auto row = 0; row < rows_count && !found_coincident; row++)
					found_coincident = grid[row][x] == 'B' && row != y;

				for (auto column = 0; column < columns_count && !found_coincident; column++)
					found_coincident = grid[y][column] == 'B' && column != x;

				cout << (found_coincident ? 1 : 2);
			}
		}

		cout << endl;
	}
}