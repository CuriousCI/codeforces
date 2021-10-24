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

	uint16_t cases, size, days;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> days;
		vector<uint16_t> piles(size);
		for (auto &pile : piles)
			cin >> pile;

		for (uint16_t pile = 1; pile < size && days; pile++)
		{
			auto movable = min((uint16_t)floor((double)days / pile), piles[pile]);
			piles.front() += movable;
			days -= movable * pile;
		}

		cout << piles.front() << endl;
	}
}