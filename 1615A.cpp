#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;
	while (cases--)
	{
		uint16_t buildings_count;
		cin >> buildings_count;

		uint64_t height, total_height = 0;

		for (auto _ = 0; _ < buildings_count; _++)
		{
			cin >> height;
			total_height += height;
		}

		cout << (total_height % buildings_count ? 1 : 0) << endl;
	}
}