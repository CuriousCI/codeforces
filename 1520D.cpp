#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t size;
		cin >> size;

		vector<int64_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		uint64_t result = 0;
		for (auto position = 0; position < size; position++)
			if (numbers[position] == position + 1)
				result++;

		cout << (result * (result - 1)) / 2 << endl;
	}
}