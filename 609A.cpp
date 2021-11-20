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

	uint16_t drives_count;
	uint32_t file_size, saved = 0, drive;

	cin >> drives_count >> file_size;
	vector<uint32_t> drives(drives_count);
	for (auto &drive : drives)
		cin >> drive;

	ranges::sort(
		drives,
		[](auto alpha, auto beta)
		{ return alpha > beta; });

	for (drive = 0; drive < drives_count; drive++)
	{
		if (saved >= file_size)
			break;
		saved += drives[drive];
	}

	cout << (saved >= file_size ? drive : -1);
}