#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t participants_number, teams = 0;
	uint16_t years;
	cin >> participants_number >> years;

	vector<uint32_t> participants(participants_number);
	for (auto &participant : participants)
		cin >> participant;

	if (participants_number >= 3)
	{

		sort(participants.begin(), participants.end());
		for (size_t team = 0; team <= participants_number - 3; team += 3)
		{
			uint32_t max_years = 0;
			for (size_t particpiant = team; particpiant < team + 3; particpiant++)
				max_years = max(max_years, participants[particpiant]);
			if (5 - max_years >= years)
				teams++;
		}
	}

	cout << teams;
}