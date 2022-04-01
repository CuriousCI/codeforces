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

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint32_t types_number;
		cin >> types_number;

		vector<uint32_t> candies(types_number);
		for (auto &type : candies)
			cin >> type;

		ranges::sort(candies);

		bool satisfied = true;
		for (auto type = 0; type < types_number - 1 && satisfied; type += 2)
			if (candies[type + 1] - candies[type] >= 2 || candies[type + 1] == candies[type])
				satisfied = false;

		cout << (satisfied && candies.front() == 1 ? "YES" : "NO") << endl;
	}
}