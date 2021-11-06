#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, height, width;

	cin >> cases;
	while (cases--)
	{
		cin >> height >> width;
		vector<string> flag(height);
		for (auto &row : flag)
			cin >> row;

		uint16_t y, x;
		for (y = 0; y < height; y++)
			for (x = 0; x < width; x++)
				if (flag[y][x] != '.')
					break;
		}
}