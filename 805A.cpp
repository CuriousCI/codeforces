#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t left, right;
	cin >> left >> right;

	cout << (left == right ? left : 2);
}