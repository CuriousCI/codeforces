#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t chests_size, keys_size, chest_odds = 0, chest_evens = 0, keys_odds = 0, keys_evens = 0, value;
	cin >> chests_size >> keys_size;
	while (chests_size--)
	{
		cin >> value;
		if (value & 1)
			chest_odds++;
		else
			chest_evens++;
	}
	while (keys_size--)
	{
		cin >> value;
		if (value & 1)
			keys_odds++;
		else
			keys_evens++;
	}

	cout << min(keys_odds, chest_evens) + min(keys_evens, chest_odds);
}