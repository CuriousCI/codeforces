#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t days_count, days_before, days_after;
	cin >> days_count >> days_before >> days_after;

	vector<uint64_t> days(days_count);
	for (auto &day : days)
		cin >> day;

	for (auto day = 0; day < days_count; day++)
	{
		uint64_t smallest_left = UINT64_MAX;
		for (int64_t left = day - days_before; left < day; left++)
			if (left >= 0)
				smallest_left = min(smallest_left, days[left]);

		uint64_t smallest_right = UINT64_MAX;
		for (int64_t right = day + 1; right <= day + days_after; right++)
			if (right < days_count)
				smallest_right = min(smallest_right, days[right]);

		if (days[day] < smallest_left && days[day] < smallest_right)
		{
			cout << day + 1;
			break;
		}
	}
}