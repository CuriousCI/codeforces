#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t
		rows,
		columns,
		left = UINT16_MAX,
		right = UINT16_MAX,
		top = 0,
		bottom = 0;

	cin >> rows >> columns;

	vector<string> drawing(rows);
	for (auto &row : drawing)
		cin >> row;

	for (auto row : drawing)
		if (row.find('*') != string::npos)
			break;
		else
			top++;

	for (auto row = rows - 1; row >= 0; row--)
		if (drawing[row].find('*') != string::npos)
			break;
		else
			bottom++;

	for (auto row = top; row < rows - bottom; row++)
	{
		uint16_t padding = 0;
		for (auto x = 0; x < columns; x++)
			if (drawing[row][x] == '*')
				break;
			else
				padding++;
		left = min(padding, left);
		padding = 0;
		for (auto x = columns - 1; x >= 0; x--)
			if (drawing[row][x] == '*')
				break;
			else
				padding++;
		right = min(padding, right);
	}

	for (auto y = top; y < rows - bottom; y++)
	{
		for (auto x = left; x < columns - right; x++)
			cout << drawing[y][x];
		cout << endl;
	}
}