#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t width, height;
	cin >> height >> width;

	vector<string> table(height);
	for (auto &row : table)
		cin >> row;

	uint16_t left = width - 1, right = 0, top = height - 1, bottom = 0;
	for (uint16_t y = 0; y < height; y++)
		for (uint16_t x = 0; x < width; x++)
			if (table[y][x] == 'B')
			{
				left = min(left, x);
				right = max(right, x);
				top = min(top, y);
				bottom = max(bottom, y);
			}

	cout
		<< top + (bottom - top) / 2 + 1 << ' '
		<< left + (right - left) / 2 + 1;
}