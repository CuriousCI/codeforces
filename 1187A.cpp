#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t eggs, stickers, toys;

	cin >> cases;
	while (cases--)
	{
		cin >> eggs >> stickers >> toys;
		cout << max(eggs - stickers, eggs - toys) + 1 << endl;
	}
}