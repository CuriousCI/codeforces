#include <iostream>
#include <ranges>
#include <set>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;
	while (cases--)
	{
		uint64_t size;
		cin >> size;

		set<pair<uint64_t, uint64_t>> existing_ranges;

		vector<pair<uint64_t, uint64_t>> rngs(size);
		for (auto &rng : rngs)
		{
			cin >> rng.first >> rng.second;
			existing_ranges.insert(rng);
		}

		for (auto rng : rngs)

		{
			cout << rng.first << ' ' << rng.second << ' ';
			if (rng.first == rng.second)
				cout << rng.first;
			else
			{
				bool found = false;
				for (auto digit = rng.first; digit <= rng.second && !found; digit++)
					if (digit == rng.first && existing_ranges.contains({digit + 1, rng.second}))
					{
						found = true;
						cout << digit;
					}
					else if (digit == rng.second && existing_ranges.contains({rng.first, digit - 1}))
					{
						found = true;
						cout << digit;
					}
					else if (existing_ranges.contains({rng.first, digit - 1}) && existing_ranges.contains({digit + 1, rng.second}))
					{
						found = true;
						cout << digit;
					}
			}
			cout << endl;
		}
	}
}