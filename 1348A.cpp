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

		for (uint32_t exponent = 1; exponent <= coins / 2; exponent++)
			if (exponent & 1)
			{
				left += 1 << exponent;
				left += 1 << (coins - exponent + 1);
			}
			else
			{
				right += 1 << exponent;
				right += 1 << (coins - exponent + 1);
			}

		if (coins == 2)
			cout << 2 << endl;
		else
			cout << abs(left - right) << endl;
	}
}