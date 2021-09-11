#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases, candies, weight;
	cin >> cases;

	while (cases--)
	{
		uint32_t twos = 0, ones = 0;
		cin >> candies;
		while (candies--)
		{
			cin >> weight;
			if (weight == 1)
				ones++;
			else
				twos++;
		}

		if ((twos & 1) == 0 && (ones & 1) == 0)
			cout << "YES";
		else if ((twos & 1) && (ones >= 2) && (ones & 1) == 0)
			cout << "YES";
		else
			cout << "NO";

		cout << endl;
	}
}