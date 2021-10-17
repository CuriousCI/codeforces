#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	struct Point
	{
		char x, y;
	} origin, destination;

	cin >> origin.x >> origin.y >> destination.x >> destination.y;
	vector<string> moves;

	while (origin.x != destination.x || origin.y != destination.y)
	{
		string move = "";
		if (origin.x < destination.x)
		{
			move += 'R';
			origin.x++;
		}
		else if (origin.x > destination.x)
		{
			move += 'L';
			origin.x--;
		}

		if (origin.y < destination.y)
		{
			move += 'U';
			origin.y++;
		}
		else if (origin.y > destination.y)
		{
			move += 'D';
			origin.y--;
		}
		moves.push_back(move);
	}

	cout << moves.size() << endl;
	for (auto move : moves)
		cout << move << endl;
}