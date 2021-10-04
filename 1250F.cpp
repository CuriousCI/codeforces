#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t area;
	cin >> area;
	if (sqrt(area) == (uint64_t)sqrt(area))
		cout << (uint64_t)sqrt(area) * 4;
	else
	{
		auto perimeter = UINT64_MAX;
		for (auto side = area / 1; side >= 1; side--)
			if ((side * (area / side)) == area)
				perimeter = min(perimeter, (side + area / side) * 2);
		cout << perimeter;
	}
}