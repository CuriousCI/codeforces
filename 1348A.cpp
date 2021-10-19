#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, coins;
	cin >> cases;

	while (cases--)
	{
		cin >> coins;
		int64_t left = 0, right = 0;

		for (uint64_t exponent = 1; exponent < coins / 2; exponent++)
			left += 1 << exponent;
		left += 1 << coins;
		for (uint64_t exponent = coins / 2; exponent < coins; exponent++)
			right += 1 << exponent;

		cout << abs(left - right) << endl;
	}
}