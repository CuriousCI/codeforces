#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t radius;
	cin >> radius;

	vector<string> pattern;

	for (int16_t y = -1; y < radius * 2; y++)
	{
		string row;

		for (int16_t x = -1; x < radius * 2; x++)
		{
			auto distance = abs(x - radius + 1) + abs(y - radius + 1);
			if (distance > radius)
				row += "  ";
			else
			{
				row += (char)('0' + radius - distance);
				row += " ";
			}
		}

		pattern.push_back(row);
	}

	for (auto &row : pattern)
	{
		while (row.back() == ' ')
			row.pop_back();
		cout << row << endl;
	}
}