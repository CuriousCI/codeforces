#include <iostream>
#include <numeric>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cost;
	uint16_t coin;

	cin >> cost >> coin;

	int32_t total = cost, shovels = 1;

	while (total % 10 && (total - coin) % 10 || total - coin < 0)
	{
		total += cost;
		shovels++;
	}

	cout << shovels;
}