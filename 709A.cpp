#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t oranges_number, max_orange_size, max_juicer_size;
	cin >> oranges_number >> max_orange_size >> max_juicer_size;

	vector<uint64_t> oranges(oranges_number);
	for (auto &orange : oranges)
		cin >> orange;

	uint64_t empty = 0, juice = 0;
	for (auto orange : oranges)
	{
		if (orange <= max_orange_size)
			juice += orange;

		if (juice > max_juicer_size)
		{
			juice = 0;
			empty++;
		}
	}

	cout << empty;
}