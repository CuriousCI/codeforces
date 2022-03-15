#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length;
	cin >> length;

	cout << (length & 1 ? 0 : (uint64_t)pow(2, length >> 1));
}