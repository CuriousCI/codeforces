#include <iostream>
#include <cmath>
#include <numeric>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t
		max_width,
		max_height,
		ratio_width,
		ratio_height;

	cin >> max_width >> max_height >> ratio_width >> ratio_height;

	uint64_t divisor = gcd(ratio_width, ratio_height);
	ratio_width /= divisor;
	ratio_height /= divisor;

	cout << (uint64_t)min(floor((double)max_width / (double)ratio_width), floor((double)max_height / (double)ratio_height));
}