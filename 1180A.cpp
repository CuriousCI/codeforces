#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t order;
	cin >> order;

	auto start = 1, step = 4;
	for (auto _ = 1; _ < order; _++)
	{
		start += step;
		step += 4;
	}

	cout << start;
}