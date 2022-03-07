#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t pylons_count;
	cin >> pylons_count;

	int32_t energy = 0, dollars = 0, pylon = 0;
	while (pylons_count--)
	{
		int32_t pylon_height;
		cin >> pylon_height;

		energy += pylon - pylon_height;
		if (energy < 0)
		{
			dollars += abs(energy);
			energy = 0;
		}

		pylon = pylon_height;
	}

	cout << dollars;
}
