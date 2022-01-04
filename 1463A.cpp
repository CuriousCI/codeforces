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
		vector<uint64_t> monsters(3);
		for (auto &monster : monsters)
			cin >> monster;
		auto life_points = monsters[0] + monsters[1] + monsters[2];
		if (life_points % 9 != 0)
			cout << "NO";
		else
			cout << (*ranges::min_element(monsters) >= life_points / 9 ? "YES" : "NO");
		cout << endl;
	}
}