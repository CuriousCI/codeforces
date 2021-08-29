#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t dormitories, letters, letter;
	cin >> dormitories >> letters;

	vector<uint32_t> rooms(dormitories), sums(dormitories);
	for (auto &room : rooms)
		cin >> room;

	for (auto room = rooms.begin() + 1; room < rooms.end(); room++)
		room[0] += room[-1];

	uint32_t left = 0, right;
	while (letters--)
	{
		right = dormitories - 1;
		cin >> letter;
	}
}