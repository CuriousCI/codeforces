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
		int32_t left = 0, right = 0;

		for (uint32_t exponent = 1; exponent <= coins; exponent++)
			if (exponent & 1)
				left += 1 << exponent;
			else
				right += 1 << exponent;

		cout << abs(left - right) << endl;
	}
}