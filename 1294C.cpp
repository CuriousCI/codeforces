#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>

using namespace std;

uint64_t divide(uint64_t number, uint64_t start)
{
	for (uint64_t divisor = start; divisor >= 2; divisor--)
		if (number % divisor == 0)
			return divisor;

	return 0;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;

	uint64_t number;

	while (cases--)
	{
		cin >> number;
		vector<uint64_t> divisors;

		bool found = false;
		uint64_t middle = sqrt(number) * 40;
		while ((middle = divide(number, middle - 1)))
		{
			uint64_t last = divide(middle, sqrt(middle));
			if (last)
			{
				uint64_t a = number / middle, b = middle / last, c = last;
				if (a != b && b != c && a != c && b != 1 && c != 1 && a != 1)
				{
					cout << "YES\n";
					cout << a << ' ' << b << ' ' << c << endl;
					found = true;
					break;
				}
			}
		}

		if (!found)
			cout << "NO" << endl;
	}
}