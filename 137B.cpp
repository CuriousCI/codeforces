#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size, number, changes = 0;
	cin >> size;

	vector<uint16_t> numbers(size);
	while (size--)
	{
		cin >> number;
		if (number <= numbers.size())
			numbers[number - 1]++;
	}

	for (auto number : numbers)
		if (!number)
			changes++;

	cout << changes;
}