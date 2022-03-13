#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t stairs_number, dirty_stairs_number;
	cin >> stairs_number >> dirty_stairs_number;

	if (dirty_stairs_number)
	{
		vector<bool> stairs(stairs_number, false);
		vector<uint64_t> dirty_stairs(dirty_stairs_number);
		for (auto &dirty_stair : dirty_stairs)
		{
			cin >> dirty_stair;
			stairs[dirty_stair - 1] = true;
		}

		ranges::sort(dirty_stairs);
		bool jumpable = true;
		for (auto stair = 2; stair < dirty_stairs_number && jumpable; stair++)
			jumpable = !stairs[dirty_stairs[stair - 1]] || !stairs[dirty_stairs[stair - 2]];

		cout << (jumpable && dirty_stairs.back() != stairs_number && !stairs.front() ? "YES" : "NO");
	}
	else
		cout << "YES";
}