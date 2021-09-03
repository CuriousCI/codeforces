#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t numbers, number, even, odd, evens = 0, odds = 0, index = 1;

	cin >> numbers;
	while (numbers--)
	{
		cin >> number;
		if (number & 1)
		{
			odds++;
			odd = index;
		}
		else
		{
			evens++;
			even = index;
		}

		index++;
	}

	cout << (evens > odds ? odd : even);
}