#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t strength, size;
	cin >> strength >> size;

	struct Dragon
	{
		uint32_t strength, bonus;
	};
	vector<Dragon> dragons(size);
	for (auto &dragon : dragons)
		cin >> dragon.strength >> dragon.bonus;

	sort(
		dragons.begin(),
		dragons.end(),
		[](auto &alpha, auto &beta)
		{
			return alpha.strength < beta.strength;
		});

	bool victory = true;
	for (auto dragon : dragons)
		if (strength > dragon.strength)
			strength += dragon.bonus;
		else
		{
			victory = false;
			break;
		}

	cout << (victory ? "YES" : "NO");
}