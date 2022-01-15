#include <iostream>
#include <numeric>
#include <vector>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	cin >> size;

	vector<uint16_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	uint16_t vector_gcd = numbers.front();
	for (auto number : numbers)
		vector_gcd = gcd(number, vector_gcd);

	cout << vector_gcd * size;
}