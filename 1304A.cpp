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
		uint64_t x, y, x_hop, y_hop;
		cin >> x >> y >> x_hop >> y_hop;

		cout << (int64_t)((y - x) % (x_hop + y_hop) ? -1 : (y - x) / (x_hop + y_hop)) << endl;
	}
}