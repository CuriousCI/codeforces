#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint16_t side;
		cin >> side;

		for (auto y = 0; y < side; y++)
		{
			for (auto x = 0; x < side - 1; x++)
				cout << (y == side - 1 ? 2 : 0) << ' ';

			cout << 2 << endl;
		}
	}
}