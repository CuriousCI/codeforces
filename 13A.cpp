#include <iostream>
#include <cmath>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t number, total = 0, denominator;
	cin >> number;

	for (auto base = 2; base < number; base++)
	{
		auto temporary = number;
		while (temporary)
		{
			total += temporary % base;
			temporary /= base;
		}
	}

	denominator = number - 2;

	for (auto divisor = 2; divisor <= min(total, denominator); divisor++)
		while (total % divisor == 0 && denominator % divisor == 0)
		{
			total /= divisor;
			denominator /= divisor;
		}

	cout << total << '/' << denominator;
}