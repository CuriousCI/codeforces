#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t groups_count, max_rooms = 0;
	cin >> groups_count;

	vector<string> groups(groups_count);
	for (auto &group : groups)
		cin >> group;

	for (auto room = 0; room < groups.front().length(); room++)
	{
		uint16_t rooms = 0;
		for (auto group : groups)
			if (group[room] == '1')
				rooms++;
		max_rooms = max(rooms, max_rooms);
	}

	cout << max_rooms;
}