#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;

	cin >> size;
	vector<uint64_t> distances(size), primes;
	for (auto &distance : distances)
		cin >> distance;

	auto longest = *ranges::max_element(distances);

	vector<bool> sieve(longest * 100, true);
	uint64_t prime;
	for (auto number = 2; number < sieve.size(); number++)
		if (sieve[number])
		{
			primes.push_back(number);
			for (auto multiplier = 2; multiplier * number < sieve.size(); multiplier++)
				sieve[number * multiplier] = false;
		}

	for (auto distance : distances)
	{
		uint64_t first = 0, second;
		for (; first < primes.size(); first++)
			if (primes[first] > distance)
				break;
		for (second = first; second < primes.size(); second++)
			if (primes[second] >= primes[first] + distance)
				break;

		cout << primes[first] * primes[second] << endl;
	}
}