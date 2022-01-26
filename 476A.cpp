#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	double
		total_steps,
		integer;

	cin >> total_steps >> integer;

	if (integer > total_steps)
		cout << -1;
	else
	{
		uint16_t multiplier = ceil(ceil(total_steps / 2.0) / integer);
		cout << (uint16_t)(integer * multiplier);
	}
}