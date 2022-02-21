#include <iostream>
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
	vector<int16_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	uint16_t positive = 0, negative = 0;
	for (auto number : numbers)
		if (number > 0)
			positive++;
		else if (number < 0)
			negative++;

	cout << (positive >= (size + (size & 1)) / 2 ? 1 : negative >= (size + (size & 1)) / 2 ? -1
																						   : 0);
}