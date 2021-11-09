#include <iostream>
#include <cmath>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Input
{
	int64_t
		damage,
		heads,
		decrement;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	int64_t size, heads;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> heads;
		vector<Input> inputs(size);
		for (auto &input : inputs)
		{
			cin >> input.damage >> input.heads;
			input.decrement = input.damage - input.heads;
		}

		ranges::sort(
			inputs,
			[](auto alpha, auto beta)
			{ return alpha.decrement > beta.decrement; });
		auto max_decrement = inputs.front().decrement;
		ranges::sort(
			inputs,
			[](auto alpha, auto beta)
			{ return alpha.damage > beta.damage; });
		auto max_damage = inputs.front().damage;

		if (max_decrement <= 0 && max_damage < heads)
			cout << -1;
		else if (max_decrement <= 0 && max_damage >= heads)
			cout << 1;
		else
			cout << max((int64_t)1, ((heads - max_damage) + max_decrement - 1) / max_decrement + 1);
		cout << endl;
	}
}