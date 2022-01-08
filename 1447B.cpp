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

	uint16_t
		test_cases,
		rows,
		columns;

	cin >> test_cases;
	while (test_cases--)
	{
		cin >> rows >> columns;

		int64_t sum = 0;
		uint16_t
			negative = 0,
			smallest_cell = UINT64_MAX;

		vector<vector<int16_t>> matrix(rows);
		for (auto &row : matrix)
		{
			row = vector<int16_t>(columns);
			for (auto &cell : row)
			{
				cin >> cell;
				if (cell < 0)
					negative++;
				smallest_cell = min(smallest_cell, (uint16_t)abs(cell));
				sum += abs(cell);
			}
		}

		if (negative & 1)
			sum -= smallest_cell * 2;

		cout << sum << endl;
	}
}