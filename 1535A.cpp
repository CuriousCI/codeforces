#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	vector<uint16_t> players(4);
	cin >> cases;

	while (cases--)
	{
		for (auto &player : players)
			cin >> player;

		vector<uint16_t> sorted(players);
		sort(sorted.begin(), sorted.end());
		sort(players.begin(), players.begin() + 2);
		sort(players.begin() + 2, players.end());
		if ((players[0] == sorted[2] && players[1] == sorted[3]) ||
			(players[2] == sorted[2] && players[3] == sorted[3]))
			cout << "NO";
		else
			cout << "YES";
		cout << endl;
	}
}