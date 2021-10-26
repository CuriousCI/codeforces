#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	uint64_t number, odds = 0, evens = 0;

	cin >> size;
	while (size--)
	{
		cin >> number;
		if (number & 1)
			odds++;
		else
			evens++;
	}

	cout << min(odds, evens);
}