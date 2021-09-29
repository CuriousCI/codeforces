#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t input;
	cin >> input;

	vector<uint16_t> primes;
	vector<bool> sieve(input + 1, true);
	for (auto number = 2; number <= input; number++)
		if (sieve[number])
		{
			primes.push_back(number);
			for (auto multiplier = 2; multiplier * number <= input; multiplier++)
				sieve[multiplier * number] = false;
		}

	uint16_t count = 0;
	for (auto number = 6; number <= input; number++)
	{
		uint16_t divisors = 0;
		for (auto prime : primes)
		{
			if (number % prime == 0)
				divisors++;
			if (divisors == 3)
				break;
		}
		if (divisors == 2)
			count++;
	}

	cout << count;
}