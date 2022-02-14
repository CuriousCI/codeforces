#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t bars_count;
	cin >> bars_count;
	vector<uint32_t> times(bars_count);
	for (auto &time : times)
		cin >> time;

	uint32_t alice = 0, bob = bars_count - 1, alice_time = 0, bob_time = 0;
	while (alice <= bob)
	{
		if (alice_time + times[alice] <= bob_time + times[bob])
		{
			alice_time += times[alice];
			alice++;
		}
		else
		{
			bob_time += times[bob];
			bob--;
		}
	}

	cout << alice << ' ' << bars_count - bob - 1;
}