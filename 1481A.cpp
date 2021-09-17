#include <iostream>
#include <unordered_map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	int64_t x, y;
	string orders;

	cin >> cases;
	while (cases--)
	{
		cin >> x >> y >> orders;
		unordered_map<char, int64_t> directions;
		for (auto direcion : orders)
			directions[direcion]++;

		if (directions['R'] >= x &&
			directions['L'] * -1 <= x &&
			directions['U'] >= y &&
			directions['D'] * -1 <= y)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
}