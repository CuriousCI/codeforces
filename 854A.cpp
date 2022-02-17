#include <iostream>
#include <numeric>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t fraction_sum, numerator = 1;
	cin >> fraction_sum;

	uint16_t result_numerator, result_denominator;
	while (numerator < fraction_sum - numerator)
	{
		auto denominator = fraction_sum - numerator;
		if (gcd(numerator, denominator) == 1)
		{
			result_numerator = numerator;
			result_denominator = denominator;
		}

		numerator++;
	}

	cout << result_numerator << ' ' << result_denominator;
}