#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t houses, colors, house, prev;
	cin >> houses >> colors >> prev;
	uint32_t longest = 1, temp = 1;

	while (--houses)
	{
		cin >> house;
		if (house != prev)
			temp++;
		else
			temp = 1;

		prev = house;
		longest = max(longest, temp);
	}

	cout << longest;
}