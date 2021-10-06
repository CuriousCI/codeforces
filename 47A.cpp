#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t number;
	cin >> number;
	double delta = sqrt(1 + abs(number * 8));
	cout << (delta == (uint64_t)delta ? "YES" : "NO");
}