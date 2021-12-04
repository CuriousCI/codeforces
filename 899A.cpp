#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t groups_count, ones = 0, twos = 0, people;
	cin >> groups_count;
	while (groups_count--)
	{
		cin >> people;
		if (people == 1)
			ones++;
		else
			twos++;
	}

	auto difference = min(ones, twos);
	ones -= difference;
	twos -= difference;

	difference += ones / 3;

	cout << difference;
}