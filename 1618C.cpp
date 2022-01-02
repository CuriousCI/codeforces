#include <iostream>
#include <numeric>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size;
	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<uint64_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		uint64_t
			gcd_odd = numbers[1],
			gcd_even = numbers[0];

		for (auto index = 0; index < size; index += 2)
			gcd_even = gcd(gcd_even, numbers[index]);

		for (auto index = 1; index < size; index += 2)
			gcd_odd = gcd(gcd_odd, numbers[index]);

		cout << (gcd_even == gcd_odd ? 0 : max(gcd_even, gcd_odd)) << endl;
	}
}