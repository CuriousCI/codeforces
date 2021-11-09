#include <iostream>
#include <vector>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Player
{
	string name;
	int64_t score;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t rounds;

	cin >> rounds;
	vector<Player> players(rounds);
	map<string, int64_t> scores;
	for (auto &player : players)
	{
		cin >> player.name >> player.score;
		scores[player.name] += player.score;
	}

	int64_t best_score = INT64_MIN;
	for (auto score : scores)
		best_score = max(best_score, score.second);

	scores.clear();
	string winner;
	for (auto player : players)
	{
		scores[player.name] += player.score;
		if (scores[player.name] >= best_score)
		{
			winner = player.name;
			break;
		}
	}

	cout << winner;
}