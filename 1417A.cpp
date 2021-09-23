#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size, cutoff;
	cin >> cases;

	while (cases--)
	{
		cin >> size >> cutoff;

		vector<uint16_t> piles(size);
		for (auto &pile : piles)
			cin >> pile;

		sort(piles.begin(), piles.end());

		uint32_t operations = 0;
		for (size_t pile = 1; pile < size; pile++)
			if (piles[pile] < cutoff)
				operations += floor(((double)cutoff - (double)piles[pile]) / (double)piles.front());

		cout << operations << endl;
	}
}