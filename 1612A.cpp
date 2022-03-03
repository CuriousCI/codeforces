#include <iostream>
#include <cmath>
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
		int32_t x, y;
		cin >> x >> y;

		int32_t distance = x + y;
		if (distance & 1)
			cout << "-1 -1";
		else
			cout << distance / 2 << ' ' << 0;
		cout << endl;
	}
}