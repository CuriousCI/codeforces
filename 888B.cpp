#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length;
	string commands;

	cin >> length >> commands;

	int16_t x = 0, y = 0;
	for (auto command : commands)
		switch (command)
		{
		case 'U':
			y--;
			break;
		case 'D':
			y++;
			break;
		case 'L':
			x--;
			break;
		case 'R':
			x++;
			break;
		}

	int16_t distance = abs(x) + abs(y);
	cout << length - distance;
}