#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t levels, level, x, y;
	cin >> levels;
	vector<bool> completed(levels);

	cin >> x;
	while (x--)
	{
		cin >> level;
		completed[level - 1] = true;
	}

	cin >> y;
	while (y--)
	{
		cin >> level;
		completed[level - 1] = true;
	}

	cout << (count(completed.begin(), completed.end(), true) == levels ? "I become the guy." : "Oh, my keyboard!");
}