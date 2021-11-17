#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length, eights = 0;
	string digits;

	cin >> length >> digits;
	for (auto digit : digits)
		eights += (digit == '8');

	cout << min(eights, (uint16_t)floor((float)length / 11.0));
}