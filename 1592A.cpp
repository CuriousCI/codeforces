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

	uint64_t cases, size, health;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> health;
		vector<uint64_t> weapons(size);
		for (auto &weapon : weapons)
			cin >> weapon;

		ranges::sort(weapons);
		auto damage = weapons.back() + weapons[size - 2];
		auto modulo = health % damage;
		cout << ((health - modulo) / damage) * 2 +
					(modulo == 0				? 0
					 : modulo <= weapons.back() ? 1
												: 2)
			 << endl;
	}
}