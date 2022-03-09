#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t
		test_cases,
		side,
		rooks;

	cin >> test_cases;
	while (test_cases--)
	{
		cin >> side >> rooks;

		if (rooks <= (side + 1) / 2)
		{
			// auto rooks = 0;

			for (auto y = 0; y < side; y++)
			{
				for (auto x = 0; x < side; x++)
					if (y == x && !(x & 1) && rooks > 0)
					{
						cout << 'R';
						rooks--;
					}
					else
						cout << '.';
				cout << endl;
			}
		}
		else
			cout << -1;
		cout << endl;
	}
}