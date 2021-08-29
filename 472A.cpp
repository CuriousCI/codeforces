#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t number, offset = 8;
	cin >> number;
	if (number & 1)
		offset = 9;
	cout << offset << ' ' << number - offset;
}