#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	double pixels, side;
	cin >> pixels;

	side = (uint64_t)sqrt(pixels);
	while ((pixels / side) != (uint16_t)(pixels / side))
		side++;

	cout << min((uint64_t)side, (uint64_t)(pixels / side)) << ' ' << max((uint64_t)side, (uint64_t)(pixels / side));
}