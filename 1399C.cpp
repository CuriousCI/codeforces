#include <iostream>
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
		uint16_t participants_count;
		cin >> participants_count;

		vector<uint16_t> participants(participants_count);
		for (auto &participant : participants)
			cin >> participant;

		ranges::sort(participants);

		auto max_teams = 0;
		for (auto weight = participants[0] + participants[1]; weight <= participants[participants_count - 1] + participants[participants_count - 2]; weight++)
		{
			auto teams = 0;
			for (auto alpha = 0; alpha < participants_count; alpha++)
				for (auto beta = alpha + 1; beta < participants_count; beta++)
					if (alpha != beta && participants[alpha] + participants[beta] == weight)
						teams++;

			max_teams = max(max_teams, teams);
		}

		cout << max_teams << endl;

		// map<uint16_t, uint16_t> combinations;
		// for (auto alpha = 0; alpha < participants_count; alpha++)
		// 	for (auto beta = 0; beta < participants_count; beta++)
		// 		if (alpha != beta)
		// 			combinations[participants[alpha] + participants[beta]]++;

		// ranges::sort(participants);
		// cout << combinations.size() << endl;
	}
}