#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t size, negative = 0, positive = 0, zero = 0, cost = 0;
	int64_t number;

	cin >> size;
	while (size--)
	{
		cin >> number;

		if (!number)
			zero++;
		else if (number < 0)
			negative++;
		else
			positive++;

		cost += number ? abs(number) - 1 : 0;
	}

	if ((negative & 1) && !zero)
		cost += 2;

	cout << cost + zero;
}