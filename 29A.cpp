#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Spit
{
	int64_t x, distance, target;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t camels_count;
	cin >> camels_count;

	vector<Spit> spits(camels_count);
	for (auto &spit : spits)
	{
		cin >> spit.x >> spit.distance;
		spit.target = spit.x + spit.distance;
	}

	for (auto spit : spits)
		for (auto target : spits)
			if (target.x == spit.target && target.target == spit.x)
			{
				cout << "YES";
				return 0;
			}

	cout << "NO";
}