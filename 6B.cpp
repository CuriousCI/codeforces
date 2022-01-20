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

	uint16_t length, width;
	char president_color;
	cin >> length >> width >> president_color;

	vector<string> room(length);
	for (auto &line : room)
		cin >> line;

	set<char> deputies;
	for (uint16_t y = 0; y < length; y++)
		for (uint16_t x = 0; x < width; x++)
			if (room[y][x] == president_color)
			{
				if (y > 0 && room[y - 1][x] != '.')
					deputies.insert(room[y - 1][x]);
				if (x > 0 && room[y][x - 1] != '.')
					deputies.insert(room[y][x - 1]);
				if (y < length - 1 && room[y + 1][x] != '.')
					deputies.insert(room[y + 1][x]);
				if (x < width - 1 && room[y][x + 1] != '.')
					deputies.insert(room[y][x + 1]);
			}

	deputies.erase(president_color);
	cout << deputies.size();
}