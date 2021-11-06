#include <iostream>
#include <numeric>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

uint64_t digit_sum(uint64_t number)
{
	uint64_t sum = 0;
	while (number)
	{
		sum += number % 10;
		number /= 10;
	}

	return sum;
}

uint64_t gcd_sum(uint64_t number)
{
	return gcd(number, digit_sum(number));
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t number;

	cin >> cases;
	while (cases--)
	{
		cin >> number;
		while (gcd_sum(number) == 1)
			number++;

		cout << number << endl;
	}
}