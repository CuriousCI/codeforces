#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t size;
		cin >> size;

		vector<uint64_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		uint64_t changes = 0;
		for (auto index = 1; index < size - 2; index++)
			if (numbers[index - 1] < numbers[index] && numbers[index + 1] > numbers[index])
			{
				numbers[index - 1] = numbers[index];
				changes++;
			}

		cout << changes << endl;
		for (auto number : numbers)
			cout << number << ' ';
		cout << endl;
	}
}