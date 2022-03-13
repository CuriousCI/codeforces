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

	uint16_t boxes_number;
	cin >> boxes_number;

	vector<uint16_t> boxes(boxes_number);
	for (auto &box : boxes)
		cin >> box;

	ranges::sort(boxes);

	uint16_t piles = 0, pile = 0;
	for (auto box = 0; box < boxes_number - 1; box++)
	{
		pile++;
		piles = max(piles, pile);
		if (boxes[box + 1] != boxes[box])
			pile = 0;
	}
	pile++;
	piles = max(piles, pile);

	cout << max(piles, (uint16_t)1);
}