#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size, queries, query;
	cin >> size;

	vector<uint32_t> piles(size);
	uint32_t worms = 0, start = 0, end, index = 1;
	for (auto &pile : piles)
	{
		cin >> pile;
		worms += pile;
	}
	vector<uint32_t> map(worms, 0);

	for (auto pile : piles)
	{
		end = start + pile;
		for (uint32_t worm = start + 1; worm <= end; worm++)
			map[worm] = index;
		start += pile;
		index++;
	}

	cin >> queries;
	while (queries--)
	{
		cin >> query;
		cout << map[query] << endl;
	}
}