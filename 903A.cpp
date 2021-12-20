#include <iostream>
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
		int64_t nuggets;
		cin >> nuggets;

		bool found = false;

		for (auto alpha = 0; alpha < 33 && !found; alpha++)
			for (auto beta = 0; beta < 33 && !found; beta++)
				if (alpha * 3 + beta * 7 == nuggets)
					found = true;

		cout << (found ? "YES" : "NO") << endl;
	}
}