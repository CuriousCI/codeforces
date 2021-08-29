#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string players;
	cin >> players;

	char current = players.front();
	uint16_t count = 0;
	for (auto player : players)
	{
		if (player == current)
			count++;
		else
		{
			count = 1;
			current = player;
		}

		if (count == 7)
		{
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
}