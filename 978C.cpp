#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t dormitories, letters, letter;
	cin >> dormitories >> letters;

	vector<uint64_t> rooms(dormitories);
	for (auto &room : rooms)
		cin >> room;

	for (auto room = rooms.begin() + 1; room < rooms.end(); room++)
		room[0] += room[-1];

	uint64_t dormitory = 0;
	while (letters--)
	{
		cin >> letter;

		auto lower = lower_bound(rooms.begin(), rooms.end(), letter);
		dormitory = distance(rooms.begin(), lower);

		cout << dormitory + 1
			 << ' '
			 << (dormitory == 0 ? letter : (letter + 1) - rooms[dormitory - 1] - 1)
			 << endl;
	}
}