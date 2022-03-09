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
		uint16_t length;
		cin >> length;

		vector<uint64_t> numbers(length);
		for (auto &number : numbers)
			cin >> number;

		bool is_sorted = true;
		for (auto number = 0; number < length - 1 && is_sorted; number++)
			is_sorted = numbers[number] <= numbers[number + 1];

		cout << (is_sorted ? "NO" : "YES") << endl;
	}
}