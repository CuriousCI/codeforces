#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t
		road_length,
		longest_jump;
	string road;

	cin >> road_length >> longest_jump >> road;

	uint32_t rock_sequence_len = 0;

	for (auto sector : road)
		if (sector == '#')
			rock_sequence_len++;
		else
		{
			if (rock_sequence_len >= longest_jump)
			{
				cout << "NO";
				return 0;
			}

			rock_sequence_len = 0;
		}

	cout << "YES";
}