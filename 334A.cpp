#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t brothers_count;
	cin >> brothers_count;

	uint16_t bag = 1;
	for (auto brother = 1; brother <= brothers_count; brother++)
	{
		for (auto _ = 1; _ <= brothers_count - (brothers_count & 1); _ += 2)
		{
			cout << bag << ' ' << brothers_count * brothers_count - bag + 1 << ' ';
			bag++;
		}

		cout << endl;
	}
}