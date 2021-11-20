#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t buttons_count, bulbs_count, turnedon_count, bulb;

	cin >> buttons_count >> bulbs_count;
	vector<bool> bulbs(bulbs_count, false);
	while (buttons_count--)
	{
		cin >> turnedon_count;
		while (turnedon_count--)
		{
			cin >> bulb;
			bulbs[bulb - 1] = true;
		}
	}

	for (auto bulb : bulbs)
		if (!bulb)
		{
			cout << "NO";
			return 0;
		}
	cout << "YES";
}