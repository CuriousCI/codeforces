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
			height,
			width;

		cin >> height >> width;
		vector<string> belt(height);
		for (auto &line : belt)
			cin >> line;

		uint64_t problematic = 0;

		for (auto y = 0; y < height; y++)
			for (auto x = 0; x < width; x++)
				switch (belt[y][x])
				{
				case 'R':
					if (x + 1 == width)
						problematic++;
					break;
				case 'D':
					if (y + 1 == height)
						problematic++;
					break;
				}

		cout << problematic << endl;
	}
}