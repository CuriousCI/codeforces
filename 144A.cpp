#include <iostream>
#include <vector>
#include <algorithm>
#include <stdint.h>

using namespace std;

int main()
{
	uint32_t soldiers;
	cin >> soldiers;

	uint16_t *tallest = nullptr, *shortest = nullptr;

	vector<uint16_t> heights(soldiers);
	for (auto &height : heights)
	{
		cin >> height;
		if (!tallest || height > *tallest)
			tallest = &height;
		if (!shortest || height <= *shortest)
			shortest = &height;
	}

	uint32_t swaps = 0;

	while (heights.front() != *tallest)
	{
		uint16_t temp = *tallest;
		*tallest = tallest[-1];
		if (tallest - 1 == shortest)
			shortest++;
		tallest[-1] = temp;
		tallest--;
		swaps++;
	}

	while (heights.back() != *shortest)
	{
		uint16_t temp = *shortest;
		*shortest = shortest[1];
		shortest[1] = temp;
		shortest++;
		swaps++;
	}

	cout << swaps;
}