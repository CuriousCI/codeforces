#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t first, second;
	cin >> first >> second;

	for (uint16_t prime = (first == 2 ? 3 : first + 2); prime <= second; prime++)
	{
		bool is_prime = true;
		for (uint16_t divisor = 2; divisor <= sqrt(second); divisor++)
			if (prime % divisor == 0)
			{
				is_prime = false;
				break;
			}

		if (is_prime && prime != second)
		{
			cout << "NO";
			return 0;
		}
		else if (is_prime && prime == second)
		{
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
}