#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

uint8_t min_distance(char origin, char destination)
{
	if (destination < origin)
	{
		auto swap = origin;
		origin = destination;
		destination = swap;
	}

	return min({
		destination - origin,
		(origin - 'A') + ('Z' - destination) + 1,
	});
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t
		length,
		min_operations = UINT16_MAX;
	string letters, genome = "ACTG";

	cin >> length >> letters;

	for (auto segment = 0; segment <= length - 4; segment++)
	{
		uint16_t temp_operations = 0;
		for (auto offset = 0; offset < 4; offset++)
			temp_operations += min_distance(letters[segment + offset], genome[offset]);

		min_operations = min(min_operations, temp_operations);
	}

	cout << min_operations;
}