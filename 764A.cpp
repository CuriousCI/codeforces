#include <iostream>
#include <numeric>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t calls, artists, day;
	cin >> calls >> artists >> day;
	auto cadence = lcm(calls, artists);
	cout << floor((double)day / (double)cadence);
}