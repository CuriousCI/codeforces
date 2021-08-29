#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

uint32_t calculate(uint32_t color)
{
	uint32_t rides = ceil((double)color / 2);
	return max(rides - 1, (uint32_t)0) * 3 + 30;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t red, green, blue;
	cin >> red >> green >> blue;
	cout << max(calculate(red), max(1 + calculate(green), 2 + calculate(blue)));
}