#include <iostream>
#include <vector>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t rounds;
	cin >> rounds;

	string player;
	int32_t score, best = 0;
	vector<pair<string, int32_t>> order;

	map<string, int32_t> players;

	while (rounds--)
	{
		cin >> player >> score;
		players[player] += score;
		order.push_back({player, players[player]});
	}

	for (auto play : players)
		best = max(play.second, best);

	for (auto play : order)
		if (play.second == best && play.second == players[play.first])
		{
			cout << play.first;
			break;
		}
}