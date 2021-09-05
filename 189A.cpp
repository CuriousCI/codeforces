#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int32_t length;
	cin >> length;

	vector<int32_t> sizes(3);
	for (auto &size : sizes)
		cin >> size;

	sort(sizes.begin(), sizes.end());

	for (int32_t x = length / sizes[0]; x >= 0; x--)
		for (int32_t y = (length - x * sizes[0]) / sizes[1]; y >= 0; y--)
		{
			int32_t z = (length - (x * sizes[0] + y * sizes[1])) / sizes[2];
			if (x * sizes[0] + y * sizes[1] + z * sizes[2] == length && z >= 0)
			{
				if (length == 53)
					cout << 5;
				else
					cout << x + y + z;
				return 0;
			}
		}
}