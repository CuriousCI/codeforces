#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint32_t x, y, z;

	cin >> cases;
	while (cases--)
	{
		cin >> x >> y >> z;

		if (x == y)
		{
			uint32_t maxi = max({x, y, z}),
					 mini = min({x, y, z});
			cout << "YES"
				 << endl
				 << maxi
				 << ' '
				 << (x + y + z) - (maxi + mini)
				 << ' '
				 << mini
				 << endl;
		}

		else if (y == z)
		{
			uint32_t maxi = max({x, y, z}),
					 mini = min({x, y, z});
			cout << "YES"
				 << endl
				 << mini
				 << ' '
				 << (x + y + z) - (maxi + mini)
				 << ' '
				 << maxi
				 << endl;
		}
		else if (x == z)
		{
			uint32_t maxi = max({x, y, z}),
					 mini = min({x, y, z});
			cout << "YES"
				 << endl
				 << mini
				 << ' '
				 << (x + y + z) - (maxi + mini)
				 << ' '
				 << maxi
				 << endl;
		}
		else
			cout << "NO" << endl;
	}
}