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

	vector<string> flag(rows);
	for (auto &row : flag)
		cin >> row;

	bool iso = true;
	for (auto row = 0; row < rows - 1; row++)
		if (flag[row] == flag[row + 1])
		{
			iso = false;
			break;
		}

	for (auto row : flag)
	{
		char reference = row.front();
		for (auto cell : row)
			if (cell != reference)
				iso = false;
		if (!iso)
			break;
	}

	cout << (iso ? "YES" : "NO");
}