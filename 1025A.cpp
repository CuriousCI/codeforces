#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t length;
	string dogs;

	cin >> length >> dogs;

	map<char, uint64_t> colors;
	bool recolorable = false;
	for (auto dog : dogs)
	{
		colors[dog]++;
		if (colors[dog] >= 2)
		{
			recolorable = true;
			break;
		}
	}

	cout << (recolorable || length == 1 ? "YES" : "NO");
}