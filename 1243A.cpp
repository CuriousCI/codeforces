#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<uint16_t> planks(size);
		for (auto &plank : planks)
			cin >> plank;

		sort(planks.begin(), planks.end());
		reverse(planks.begin(), planks.end());

		uint16_t longest = 0;

		for (uint16_t bottom = 0; bottom < size; bottom++)
			longest = max(min(planks[bottom], (uint16_t)(bottom + 1)), longest);

		cout << longest << endl;
	}
}