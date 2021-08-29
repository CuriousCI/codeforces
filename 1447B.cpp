#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, rows, columns;

	cin >> cases;
	while (cases--)
	{
		cin >> rows >> columns;

		vector<vector<int16_t>> matrix(rows);
		for (auto &row : matrix)
		{
			row = vector<int16_t>(columns);
			for (auto &cell : row)
				cin >> cell;
		}
	}
}