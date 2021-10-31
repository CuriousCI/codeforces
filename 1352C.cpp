#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t divisor, position;

	cin >> cases;
	while (cases--)
	{
		cin >> divisor >> position;

		auto multiplier = 0;
		for (auto step = position; step; step >>= 1)
			while ((divisor * (multiplier + step)) - (multiplier + step) < position)
				multiplier += step;
		cout << (divisor * multiplier) + (position - ((divisor * multiplier) - multiplier)) << endl;
	}
}