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
		uint32_t length;
		cin >> length;

		vector<uint32_t> numbers(length);
		for (auto &number : numbers)
			cin >> number;

		bool found = false;
		for (auto start = 0; start < length && !found; start++)
			for (auto end = start + 2; end < length && !found; end++)
				found = numbers[start] == numbers[end];

		cout << (found ? "YES" : "NO") << endl;
	}
}