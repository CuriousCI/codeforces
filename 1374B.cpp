#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases;
	uint64_t number;
	cin >> cases;

	while (cases--)
	{
		cin >> number;
		uint32_t twos = 0, threes = 0;
		while (number % 2 == 0)
		{
			twos++;
			number /= 2;
		}
		while (number % 3 == 0)
		{
			threes++;
			number /= 3;
		}

		if (twos > threes || number != 1)
			cout << -1;
		else
			cout << (threes - twos) + threes;

		cout << endl;
	}
}