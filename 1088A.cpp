#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t number, divisor = 2;
	cin >> number;

	if (number == 1)
		cout << -1;
	else if (number & 1)
		cout << number - 1 << ' ' << 2;
	else
		cout << number << ' ' << 2;
}