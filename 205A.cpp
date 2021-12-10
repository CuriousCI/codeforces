#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t
		cities_count = 0,
		travel_time,
		current_time = UINT32_MAX,
		town_number = 1,
		current_town = 1;

	bool still_rozdil = false;

	cin >> cities_count;

	while (cities_count--)
	{
		cin >> travel_time;

		if (travel_time == current_time)
			still_rozdil = true;

		if (travel_time < current_time)
		{
			current_time = travel_time;
			current_town = town_number;
			still_rozdil = false;
		}

		town_number++;
	}

	if (still_rozdil)
		cout << "Still Rozdil";
	else
		cout << current_town;
}