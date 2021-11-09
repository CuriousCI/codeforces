#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t coin, value;
	cin >> coin >> value;
	auto modulo = value % coin;
	cout << (value - modulo) / coin + (bool)(modulo);
}