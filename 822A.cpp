#include <iostream>
#include <numeric>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t alpha, beta, factorial = 1;
	cin >> alpha >> beta;

	for (auto number = 2; number <= min(alpha, beta); number++)
		factorial *= number;
	cout << factorial;
}