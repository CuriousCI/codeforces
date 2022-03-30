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

	uint32_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint32_t explorers_number;
		cin >> explorers_number;

		vector<uint32_t> explorers_inexperience(explorers_number);
		for (auto &explorer : explorers_inexperience)
			cin >> explorer;

		ranges::sort(explorers_inexperience);

		uint32_t groups_number = 0, group_size = 0;
		for (auto explorer = 0; explorer < explorers_number; explorer++)
		{
			group_size++;
			if (explorers_inexperience[explorer] <= group_size)
			{
				group_size = 0;
				groups_number++;
			}
		}

		cout << groups_number << endl;
	}
}