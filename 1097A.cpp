#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string table, hand;

	cin >> table;
	bool playable = false;
	for (uint8_t _ = 0; _ < 5; _++)
	{
		cin >> hand;
		if (hand.front() == table.front() || hand.back() == table.back())
			playable = true;
	}
	cout << (playable ? "YES" : "NO");
}