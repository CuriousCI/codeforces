#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, count, size;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> count;
		vector<uint64_t> numbers(count * size);
		for (auto &number : numbers)
			cin >> number;

		auto sum = 0;

		sort(numbers.begin(), numbers.end());
		// reverse(numbers.begin(), numbers.end());
		for (auto _ = 0; _ < count; _++)
			sum += numbers[count * size - _ - 1];

		// for (auto group = 0; group < count; group++)
		// 	sum += numbers[(size % 2 == 0 ? size / 2 - 1 : (size - 1) / 2) + group * size];

		cout << sum << endl;
	}
}