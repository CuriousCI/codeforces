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
		int64_t sticks, diamonds;
		cin >> sticks >> diamonds;

		cout << min({sticks, diamonds, (sticks + diamonds) / 3}) << endl;
	}
}