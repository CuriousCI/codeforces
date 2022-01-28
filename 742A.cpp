#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t exponent;
	cin >> exponent;

	vector<uint64_t> result = {8, 4, 2, 6};
	if (exponent)
		cout << result[(exponent % 4 ? (exponent % 4) - 1 : 3)];
	else
		cout << 1;
}