#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string block;
	uint64_t side, pieces = 0;
	cin >> side;

	for (auto row = 0; row < side; row++)
	{
		for (auto column = 0; column < side; column++)
		{
			if (row & 1)
			{
				if (column & 1)
				{
					block += 'C';
					pieces++;
				}
				else
					block += '.';
			}
			else
			{
				if (column & 1)
					block += '.';
				else
				{
					block += 'C';
					pieces++;
				}
			}
		}

		block += '\n';
	}

	cout << pieces << endl
		 << block;
}