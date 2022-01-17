#include <iostream>
#include <map>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cafes_count, cafe;
	cin >> cafes_count;

	map<uint32_t, uint32_t> last_visits;
	for (auto index = 0; index < cafes_count; index++)
	{
		cin >> cafe;
		last_visits[cafe] = index;
	}

	uint32_t oldest, oldest_time = UINT32_MAX;
	for (auto visit : last_visits)
		if (visit.second < oldest_time)
		{
			oldest_time = visit.second;
			oldest = visit.first;
		}

	cout << oldest;
}