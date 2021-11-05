#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t moves, candies;
	cin >> moves >> candies;
	auto delta = 9 - 8 * (moves + candies);
	auto result = min(sqrt(delta) - 3, sqrt(delta) + 3) / 2;
	cout << moves - round(result);
}