#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size;
	string events;
	cin >> size >> events;

	vector<uint8_t> rooms(10, 0);
	for (auto event : events)
		if (event == 'L')
		{
			for (auto &room : rooms)
			{
				if (room == 0)
				{
					room = 1;
					break;
				}
			}
		}
		else if (event == 'R')
		{
			for (size_t room = 9; room >= 0; room--)
			{
				if (rooms[room] == 0)
				{
					rooms[room] = 1;
					break;
				}
			}
		}
		else
		{
			uint8_t room = event - '0';
			rooms[room] = 0;
		}

	for (auto room : rooms)
		cout << (uint16_t)room;
}