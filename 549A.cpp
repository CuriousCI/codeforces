#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t height, width;
	cin >> height >> width;

	if (height < 2 || width < 2)
	{
		cout << 0;
		return 0;
	}
	else
	{
		uint64_t faces = 0;

		vector<string> image(height);
		for (auto &row : image)
			cin >> row;

		for (auto x = 0; x < width - 1; x++)
			for (auto y = 0; y < height - 1; y++)
			{
				string characters;
				for (auto x_offset = 0; x_offset <= 1; x_offset++)
					for (auto y_offset = 0; y_offset <= 1; y_offset++)
						characters += image[y + y_offset][x + x_offset];
				ranges::sort(characters);
				if (characters == "acef")
					faces++;
			}

		cout << faces;
	}
}