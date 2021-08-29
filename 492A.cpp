#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cubes, required = 0, step = 0, total = 0;
	cin >> cubes;

	while (total + required <= cubes)
	{
		total += required;
		step++;
		required += step;
		if (required + total > cubes)
			step--;
	}

	cout << step;
}