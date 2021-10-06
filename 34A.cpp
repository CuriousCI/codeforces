#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;

	cin >> size;
	vector<int16_t> heights(size);
	for (auto &heigth : heights)
		cin >> heigth;
	auto index = 1, difference = abs(heights[1] - heights[0]);
	for (auto height = 1; height < size; height++)
		if (abs(heights[height] - heights[height - 1]) < difference)
		{
			difference = abs(heights[height] - heights[height - 1]);
			index = height;
		}

	if (abs(heights.back() - heights.front()) < difference)
		cout << 1 << ' ' << size;
	else
		cout << index + 1 << ' ' << index;
}