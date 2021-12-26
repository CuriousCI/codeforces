#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>
#include <ranges>

using namespace std;

struct Team
{
	string name;
	int64_t
		wins = 0,
		draws = 0,
		defeats = 0,
		scored_goals = 0,
		missed_goals = 0,
		points = 0;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t teams_count;
	cin >> teams_count;

	vector<Team> teams(teams_count);
	for (auto &team : teams)
		cin >> team.name;

	uint16_t matches_count = teams_count * (teams_count - 1) / 2;

	string match_teams;
	char placeholder;
	uint16_t alpha_score, beta_score;
	while (matches_count--)
	{
		cin >> match_teams;
		cin >> alpha_score >> placeholder >> beta_score;

		string alpha, beta;
		auto index = 0;
		for (; match_teams[index] != '-'; index++)
			alpha += match_teams[index];
		index++;
		for (; index < match_teams.length(); index++)
			beta += match_teams[index];

		for (auto &team : teams)
			if (team.name == alpha)
			{
				if (alpha_score > beta_score)
					team.wins++;
				else if (alpha_score < beta_score)
					team.defeats++;
				else
					team.draws++;

				team.scored_goals += alpha_score;
				team.missed_goals += beta_score;
			}
			else if (team.name == beta)
			{
				if (alpha_score > beta_score)
					team.defeats++;
				else if (alpha_score < beta_score)
					team.wins++;
				else
					team.draws++;

				team.scored_goals += beta_score;
				team.missed_goals += alpha_score;
			}
	}

	for (auto &team : teams)
		team.points = team.wins * 3 + team.draws;

	for (auto alpha = 0; alpha < teams.size(); alpha++)
		for (auto beta = 0; beta < teams.size(); beta++)
			if (teams[alpha].points > teams[beta].points)
			{
				auto temp = teams[alpha];
				teams[alpha] = teams[beta];
				teams[beta] = temp;
			}
			else if (teams[alpha].points == teams[beta].points)
			{
				if (teams[alpha].scored_goals - teams[alpha].missed_goals > teams[beta].scored_goals - teams[beta].missed_goals)
				{
					auto temp = teams[alpha];
					teams[alpha] = teams[beta];
					teams[beta] = temp;
				}
				else if (teams[alpha].scored_goals - teams[alpha].missed_goals == teams[beta].scored_goals - teams[beta].missed_goals)
				{
					if (teams[alpha].scored_goals > teams[beta].scored_goals)
					{
						auto temp = teams[alpha];
						teams[alpha] = teams[beta];
						teams[beta] = temp;
					}
				}
			}

	vector<string> names;
	for (auto index = 0; index < teams_count / 2; index++)
		names.push_back(teams[index].name);
	ranges::sort(names);
	for (auto name : names)
		cout << name << endl;
}