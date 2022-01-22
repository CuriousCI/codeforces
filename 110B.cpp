#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t length;
	cin >> length;

	uint8_t letter = 0;
	while (length--)
	{
		cout << (char)('a' + letter);
		letter++;
		letter %= 4;
	}
}