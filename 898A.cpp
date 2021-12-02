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
	auto modulo = number % 10;
	if (modulo <= 5)
		number -= modulo;
	else
		number += (10 - modulo);

	cout << number;
}