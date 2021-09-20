#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, heroes;

	cin >> cases;
	while (cases--)
	{
		cin >> heroes;
		vector<uint16_t> levels(heroes);
		for (auto &level : levels)
			cin >> level;

		sort(levels.begin(), levels.end());
		uint32_t result = 0;
		for (auto level : levels)
			if (level != levels.front())
				result++;

		cout << result << endl;
	}
}
