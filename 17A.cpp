#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t max_number, min_numbers;
	cin >> max_number >> min_numbers;

	vector<bool> sieve(max_number + 1, true);
	vector<uint64_t> primes;
	for (auto number = 2; number <= max_number; number++)
		if (sieve[number])
		{
			primes.push_back(number);
			for (auto multiplier = 2; multiplier * number <= max_number; multiplier++)
				sieve[number * multiplier] = false;
		}

	uint64_t noldbach_numbers = 0;

	for (auto index = 0; index < primes.size() - 1; index++)
		if (primes[index] + primes[index + 1] + 1 <= max_number)
			if (sieve[primes[index] + primes[index + 1] + 1])
			{
				noldbach_numbers++;
				if (noldbach_numbers >= min_numbers)
					break;
			}

	cout << (noldbach_numbers >= min_numbers ? "YES" : "NO");
}