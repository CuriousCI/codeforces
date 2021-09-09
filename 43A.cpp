#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t goals;
	cin >> goals;

	string home, away, team;
	uint32_t home_g = 1, away_g = 0;
	cin >> home;

	while (--goals)
	{
		cin >> team;
		if (team == home)
			home_g++;
		else
		{
			away = team;
			away_g++;
		}
	}

	cout << (away_g > home_g ? away : home);
}
