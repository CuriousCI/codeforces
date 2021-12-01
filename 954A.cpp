#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length, diagonals = 0;
	string movements;
	cin >> length >> movements;
	for (auto index = 1; index < length; index++)
		if (movements[index] != movements[index - 1])
		{
			diagonals++;
			index++;
		}
	cout << length - diagonals;
}
