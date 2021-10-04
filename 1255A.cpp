#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t current, desired;

	cin >> cases;
	while (cases--)
	{
		cin >> current >> desired;

		if (current > desired)
			swap(current, desired);

		uint64_t fives, twos;
		fives = floor((double)(desired - current) / 5);
		current += fives * 5;
		twos = floor((double)(desired - current) / 2);
		current += twos * 2;

		cout << fives + twos + (desired - current) << endl;
	}
}