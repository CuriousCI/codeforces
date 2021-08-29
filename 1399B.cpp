#include <iostream>
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
		uint16_t gifts;
		cin >> gifts;

		vector<uint64_t> candies(gifts), oranges(gifts);
		for (auto &candy : candies)
			cin >> candy;
		for (auto &orange : oranges)
			cin >> orange;

		uint64_t goal_candy = *min_element(candies.begin(), candies.end()),
				 goal_orange = *min_element(oranges.begin(), oranges.end());

		uint64_t moves = 0, total;
		for (size_t gift = 0; gift < gifts; gift++)
		{
			total = min(candies[gift] - goal_candy, oranges[gift] - goal_orange);
			moves += total;
			moves += (candies[gift] - total) - goal_candy;
			moves += (oranges[gift] - total) - goal_orange;
		}

		cout << moves << endl;
	}
}