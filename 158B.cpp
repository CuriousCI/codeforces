#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t groups, group;
	cin >> groups;

	uint32_t count[4] = {0};

	while (groups--)
	{
		cin >> group;
		count[group - 1]++;
	}

	uint32_t three_one = min(count[2], count[0]),
			 two_rest = count[1] & 1,
			 four_one = 0,
			 last = 0;

	count[2] -= three_one;
	count[0] -= three_one;

	if (count[0])
		four_one = floor(count[0] / 4.0);

	count[0] -= four_one * 4;

	if (two_rest && count[0] <= 2)
		last = 1;
	else if (two_rest && count[0] > 2)
		last = 2;
	else if (count[0])
		last = 1;

	cout << count[3] + three_one + floor(count[1] / 2.0) + four_one + count[2] + last;
}