#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t minimum, divisor;

	cin >> minimum >> divisor;
	uint64_t multiplier = floor((double)minimum / (double)divisor);
	while (divisor * multiplier <= minimum)
		multiplier++;

	cout << divisor * multiplier;
}