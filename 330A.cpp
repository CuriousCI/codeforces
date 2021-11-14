#include <iostream>
#include <set>
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

	vector<string> cake(rows);
	for (auto &row : cake)
		cin >> row;

	set<uint16_t> unedible_rows, unedible_columns;
	for (auto x = 0; x < columns; x++)
		for (auto y = 0; y < rows; y++)
			if (cake[y][x] == 'S')
			{
				unedible_columns.insert(x);
				unedible_rows.insert(y);
			}

	cout << (rows - unedible_rows.size()) * columns + (columns - unedible_columns.size()) * unedible_rows.size();
}
