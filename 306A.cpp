#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t candies, friends;
	cin >> candies >> friends;

	uint16_t modulo = candies % friends;
	for (auto _ = 0; _ < friends - modulo; _++)
		cout << candies / friends << ' ';
	for (auto _ = 0; _ < modulo; _++)
		cout << (candies / friends) + 1 << ' ';
}