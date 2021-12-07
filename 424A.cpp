#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t length, up = 0;
	string hamsters;
	cin >> length >> hamsters;
	for (auto hamster : hamsters)
		if (hamster == 'X')
			up++;
	int16_t down = length - up;
	int16_t difference = abs(up - down) / 2;
	auto changes = difference;
	if (up > down)
		for (auto &hamster : hamsters)
		{
			if (!difference)
				break;

			if (hamster == 'X')
			{
				hamster = 'x';
				difference--;
			}
		}
	else if (down > up)
		for (auto &hamster : hamsters)
		{
			if (!difference)
				break;

			if (hamster == 'x')
			{
				hamster = 'X';
				difference--;
			}
		}

	cout << changes << endl
		 << hamsters;
}