#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t length, sum;
	cin >> length;
	sum = (length * (length + 1)) / 2;
	cout << (sum & 1);
}
