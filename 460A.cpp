#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t socks, days;
	cin >> socks >> days;

	cout << (uint16_t)(socks + (socks / (days - 1))) - !(socks % (days - 1));
}