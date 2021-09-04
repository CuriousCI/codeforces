#include <iostream>
#include <set>
#include <vector>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size;
	cin >> size;

	vector<uint64_t> numbers(size);
	uint64_t biggest = 0, smallest = UINT64_MAX;
	for (auto &number : numbers)
	{
		cin >> number;
		biggest = max(number, biggest);
		smallest = min(number, smallest);
	}

	vector<bool> sieve(1e6 + 1, true);
	sieve[0] = false;
	sieve[1] = false;

	uint64_t root = sqrt(1e6 + 1);

	for (uint64_t number = 2; number <= root; number++)
		if (sieve[number])
			for (uint64_t multiplier = 2; multiplier * number <= 1e6 + 1; multiplier++)
				sieve[multiplier * number] = false;

	for (auto number : numbers)
		cout << (sieve[sqrt(number)] && double(sqrt(number)) == uint64_t(sqrt(number)) ? "YES" : "NO") << endl;
}