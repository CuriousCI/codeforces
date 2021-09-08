#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size, number;
	cin >> cases;

	while (cases--)
	{
		uint16_t count = 1, sample, diff, position = 2;
		cin >> size >> sample;
		while (--size)
		{
			cin >> number;
			if (number == sample)
				count++;
			else
				diff = position;
			position++;
		}

		cout << (count == 1 ? 1 : diff) << endl;
	}
}