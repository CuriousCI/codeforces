#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t number, alpha = 0, beta = 1, gamma = 1;
	cin >> number;

	map<uint64_t, pair<uint64_t, uint64_t>> fibonacci_numbers;

	while (gamma <= number)
	{
		fibonacci_numbers[gamma] = {alpha, beta};

		alpha = beta;
		beta = gamma;
		gamma = alpha + beta;
	}

	auto fib_pair = fibonacci_numbers[number];
	cout << fib_pair.second << ' '
		 << fibonacci_numbers[fib_pair.first].first
		 << ' '
		 << fibonacci_numbers[fib_pair.first].second;
}