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
		double magic_number;

		cin >> size >> magic_number;

		vector<double> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		uint64_t sum = 0;
		for (auto number : numbers)
			sum += number;

		cout << (sum == magic_number ? "YES" : "NO") << endl;
	}
}