#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string news;
	cin >> news;

	uint16_t position = 0;
	for (auto letter : news)
	{
		if (letter == "heidi"[position])
			position++;
		if (position == 5)
			break;
	}

	cout << (position == 5 ? "YES" : "NO");
}