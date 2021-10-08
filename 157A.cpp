#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t side, winning = 0;

	cin >> side;
	vector<vector<uint16_t>> square(side);
	for (auto &row : square)
	{
		row = vector<uint16_t>(side);
		for (auto &number : row)
			cin >> number;
	}

	for (auto y = 0; y < side; y++)
		for (auto x = 0; x < side; x++)
		{
			uint16_t row = 0, column = 0;
			for (auto cell = 0; cell < side; cell++)
			{
				row += square[y][cell];
				column += square[cell][x];
			}

			if (column > row)
				winning++;
		}

	cout << winning;
}