#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t stones;
	cin >> stones;
	auto modulo = stones % 3;
	cout << ((stones - modulo) / 3) * 2 + bool(modulo);
}