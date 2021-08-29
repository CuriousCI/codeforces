#include <iostream>
#include <vector>
#include <algorithm>
#include <stdint.h>

using namespace std;

int main()
{
	uint32_t amount, seconds = 0;
	cin >> amount;

	vector<uint16_t> heights(amount);
	for (auto &height : heights)
		cin >> height;

	uint16_t max = *max_element(heights.begin(), heights.end()),
			 min = *min_element(heights.begin(), heights.end());

	for (auto height = heights.begin(); height < heights.end(); height++)
	{
		if (*height == min)
			for (auto temp = height; temp < heights.end(); temp++, seconds++)
				swap(temp[0], temp[1]);
		if (*height == max)
			for (auto temp = height; temp > heights.begin(); temp--, seconds++)
				swap(temp[0], temp[-1]);
	}
	cout << seconds;
}