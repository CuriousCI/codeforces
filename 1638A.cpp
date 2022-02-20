#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases, size;
	cin >> test_cases;
	while (test_cases--)
	{
		cin >> size;
		vector<uint16_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		auto position = 0;
		for (; position < size; position++)
			if (numbers[position] > position + 1)
				break;

		auto end = position;
		while (numbers[end] != position + 1 && end < size)
			end++;

		if (position != size)
			reverse(numbers.begin() + position, numbers.begin() + end + 1);

		for (auto number : numbers)
			cout << number << ' ';
		cout << endl;
	}
}