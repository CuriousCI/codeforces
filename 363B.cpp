#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t planks, width;
	cin >> planks >> width;

	vector<uint32_t> heights(planks);
	for (auto &height : heights)
		cin >> height;

	uint32_t temp = 0, smallest, position = 1;
	for (uint32_t index = 0; index < width; index++)
		temp += heights[index];

	smallest = temp;
	for (uint32_t index = 0; index < planks - width; index++)
	{
		temp -= heights[index];
		temp += heights[index + width];
		if (temp < smallest)
		{
			smallest = temp;
			position = index + 2;
		}
	}

	cout << position;
}