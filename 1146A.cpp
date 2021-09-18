#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string text;
	cin >> text;

	uint16_t count = 0;
	for (auto letter : text)
		if (letter == 'a')
			count++;

	cout << min(count * 2 - 1, (int)text.size());
}