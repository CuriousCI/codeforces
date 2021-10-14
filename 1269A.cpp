#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t number;
	cin >> number;
	cout << 9 * number << ' ' << 8 * number;
}