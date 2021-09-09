#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t candles, factor, total = 0, rest = 0;
	cin >> candles >> factor;

	while (candles)
	{
		total += candles;
		rest += candles % factor;
		candles = candles / factor;
		if (rest >= factor)
		{
			candles += rest / factor;
			rest %= factor;
		}
	}

	cout << total;
}