#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

bool possible(uint32_t length, uint32_t sum)
{
	return sum >= 0 && sum <= 9 * length;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t length, sum;
	cin >> length >> sum;

	for (uint32_t position = 0; position < length; position)
	{
		}
}