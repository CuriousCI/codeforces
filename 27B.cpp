#include <iostream>
#include <ranges>
#include <vector>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t participants_count;
	cin >> participants_count;

	uint32_t games_count = participants_count * (participants_count - 1) / 2 - 1;
	vector<pair<uint32_t, uint32_t>> games(games_count);
	for (auto &game : games)
		cin >> game.first >> game.second;

	set<pair<uint32_t, uint32_t>> possible_games;

	for (auto alpha = 1; alpha <= participants_count; alpha++)
		for (auto beta = alpha + 1; beta <= participants_count; beta++)
			possible_games.insert({alpha, beta});

	for (auto game : games)
	{
		possible_games.erase(game);
		possible_games.erase({game.second, game.first});
	}

	pair<uint32_t, uint32_t> missing_game;
	for (auto game : possible_games)
		missing_game = game;

	ranges::sort(games);

	vector<uint32_t> participants(participants_count + 1, 0);
	for (auto game : games)
		participants[game.second] = participants[game.first] + 1;

	uint32_t first, second;
	if (participants[missing_game.first] < participants[missing_game.second])
	{
		first = missing_game.first;
		second = missing_game.second;
	}
	else
	{
		first = missing_game.second;
		second = missing_game.first;
	}

	cout << first << ' ' << second;
}