#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t
		alpha = 1,
		beta = 1,
		fibonacci = 1;

	uint16_t count;
	cin >> count;

	for (auto _ = 1; _ < count; _++)
	{
		fibonacci = alpha + beta;
		alpha = beta;
		beta = fibonacci;
	}

	cout << fibonacci;
}