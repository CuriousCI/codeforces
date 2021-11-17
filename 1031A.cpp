#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t width, height, rings, total = 0;
	cin >> width >> height >> rings;
	while (rings--)
	{
		total += (width - 2) * 2 + height * 2;
		width -= 4;
		height -= 4;
	}

	cout << total;
}